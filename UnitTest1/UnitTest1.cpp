#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.2.A/PR9.2.A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		/*	enum Kurs { I, II, III, IV, V, VI };
			string kursStr[] = { "I","II","III","IV","V","VI" };

			enum Spec { IT, CS, SA, SE };
			string specStr[] = { "Inform sys and tec","Computer Science ","System analysis  ","Softwar enginering" };*/

			Student *s = new Student;
			s->kurs = I;
			s->spec = IT;
			s->prizv = "A";
			int t = BinSearch(s, 1, "A", II, IT);
			Assert::AreEqual(t, -1);
		}
	};
}
