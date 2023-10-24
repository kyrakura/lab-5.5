#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.5/lab 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab55test
{
	TEST_CLASS(lab55test)
	{
		public:
			TEST_METHOD(TestMethod1)
			{
				double c;
				int depth = 1;
				int d = 10;
				int r = 10;
				c = S(1, depth, d, r);
				Assert::AreEqual(c, 1, 0.1);
			}
		
		};
	}
