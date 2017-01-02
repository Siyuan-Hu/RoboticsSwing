using UnityEngine;
using System.Collections;
using System.IO;

public class QLearning_Body
{
	public const int ActionNum = 2; // 0: down; 1: up
	public const int DegreeNum = 1;//200 	//100
	public const int Xseed = 2;
	public const int Xnum = 2;//201
	public const int Qsize = DegreeNum * Xseed * Xnum + 1;
	public const float gamma = 0.0f;//0.5f

	public static int[] R = new int[Xnum];
	public static float[,,,] Q = new float[Xnum, Xseed, DegreeNum, ActionNum];

	private static int[,,,] iteratorTimes = new int[Xnum, Xseed, DegreeNum, ActionNum];

	public static void initial()
	{
		// may need to be improved: dong neng
		R = new int[Xnum];

		// use energy gap to replace the reward array
//		for (int i = 0; i < Xnum; i++) 
//		{
//			if (i < Xnum / 2)
//				R [i] = Xnum / 2 - i;
//			else
//				R [i] = i - Xnum / 2;
//		}

		//ReadQdata ();
	}

	public static int chooseAction(State state)
	{
		int possibleAction;
		int possibility = Random.Range (-1, 2);

//		if (state.x > 100)
//			return 0;
//		else
//			return 1;

		if (Q [state.x, state.y, state.degree, 0] == 0)
			return 0;
		if (Q [state.x, state.y, state.degree, 1] == 0)
			return 1;

		if (possibility >= 0)
			possibleAction = getMaxAction (state);
		else
			possibleAction = getRandomAction ();

		return possibleAction;
	}

	public static void updateQ(State currentState, int action, State nextState)
	{
		float tmp = reward (nextState);
//		if (tmp > Q [currentState.x, currentState.y, currentState.degree, action])
//			Q [currentState.x, currentState.y, currentState.degree, action] = tmp;
		//if (currentState.x == nextState.x && currentState.y == nextState.y) 
		{
			if (currentState.x + currentState.y == 1)
				tmp += (-nextState.energy + currentState.energy);
				//tmp += (nextState.kineticEnergy - currentState.kineticEnergy);
			//else
			if (currentState.x + currentState.y != 1)
				tmp += (nextState.energy - currentState.energy);
		
			if (iteratorTimes [currentState.x, currentState.y, currentState.degree, action] < int.MaxValue)
				Q [currentState.x, currentState.y, currentState.degree, action] = Q [currentState.x, currentState.y, currentState.degree, action]
				- (Q [currentState.x, currentState.y, currentState.degree, action] - tmp) / (++iteratorTimes [currentState.x, currentState.y, currentState.degree, action]);
		}
		//Q [currentState.x, currentState.y, currentState.degree, action] = (Q [currentState.x, currentState.y, currentState.degree, action] + tmp) / 2;
		
	}

	public static int getRandomAction()
	{
		int action = Random.Range (-1, 1);

		if (action >= 0)
			action = 1;
		else
			action = 0;

		return action;
	}

	public static int getMaxAction(State state)
	{
		int action = (int)maximum (state, true);
		return action;
	}

	public static float maximum(State state, bool returnIndexOnly)
	{
		int winner;

		if (state.y < 0) {
			int i = 0;
		}

		if (state.x < 0 || state.x >= Xnum || state.y < 0 || state.y >= Xseed || state.degree < 0 || state.degree >= DegreeNum) 
		{
			int i = 0;
		}

		if (Q [state.x, state.y, state.degree, 0] > Q [state.x, state.y, state.degree, 1])
			winner = 0;
		else
			winner = 1;

		if (returnIndexOnly)
			return winner;
		else
			return Q [state.x, state.y, state.degree, winner];
	}

	public static float reward(State state)
	{
		return R [state.x] + gamma * maximum (state, false);
	}

	public static void WriteQdata()
	{

		StreamWriter sw;
		FileInfo t = new FileInfo ("LearningData" + "/" + "QBody.txt");
		sw = t.CreateText();

		for (int i = 0; i < Xnum; i++)
			for (int j = 0; j < Xseed; j++) 
			{
				for (int k = 0; k < DegreeNum; k++)
					for (int action = 0; action <= 1; action++)
						sw.Write (Q [i, j, k, action].ToString () + " ");
				sw.WriteLine ("");
			}
		sw.Close();
		sw.Dispose();
	}

	public static void ReadQdata()
	{
		StreamReader sr =null;
		try
		{
			sr = File.OpenText("LearningData" + "/" + "QBody.txt");
		}
		catch(System.Exception e)
		{
		}
		string line;
		int i = 0, j = -1;
		while ((line = sr.ReadLine()) != null)
		{
			j++;
			i += j / Xseed;
			j %= Xseed;

			string[] numbers = line.Split (' ');
			for (int k = 0; k < DegreeNum; k++)
				for (int action = 0; action <= 1; action++) 
				{
					Q [i, j, k, action] = float.Parse (numbers [k * 2 + action]);
				}
		}
		sr.Close();
		sr.Dispose();
	} 
}
