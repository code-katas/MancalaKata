#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\MancalaKata\Well.h"
#include "..\MancalaKata\Board.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MancalaKataTests
{		
	TEST_CLASS(MancalaKataTests)
	{
	public:
		
		TEST_METHOD(WellConstainsDefaultNumberOfSeeds)
		{
			Well myWell;
			auto seedCount = myWell.GetNumberOfSeeds();

			Assert::AreEqual(
				// Expected value:
				4,
				// Actual value (function call):
				seedCount,
				// Message:
				L"Well did not contain default number of seeds.",
				// Line number - used if there is no PDB file:
				LINE_INFO());
		}

		TEST_METHOD(CanGatherSeeds)
		{
			Board board;
			int wellNumber = 3;
			auto wellSeeds = board.GatherSeeds(wellNumber);
			Well* myWell = board.GetWell(wellNumber);

			Assert::AreEqual(
				// Expected value:
				4,
				// Actual value (function call):
				wellSeeds,
				// Message:
				L"Board didn't return seeds from well",
				// Line number - used if there is no PDB file:
				LINE_INFO());
			Assert::AreEqual(
				// Expected value:
				0,
				// Actual value (function call):
				myWell->GetNumberOfSeeds(),
				// Message:
				L"Board didn't empty the well",
				// Line number - used if there is no PDB file:
				LINE_INFO());
		}

	};
}