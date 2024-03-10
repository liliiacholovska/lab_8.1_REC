#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1(2)/lab8.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFindThirdDotIndexRec)
		{
            char str1[] = "++-+!!!!!!,,...";
            char str2[] = "...";
            char str3[] = "abc";

            Assert::AreEqual(14, FindThirdDotIndexRec(str1));
            Assert::AreEqual(2, FindThirdDotIndexRec(str2));
            Assert::AreEqual(-1, FindThirdDotIndexRec(str3));
		}

        TEST_METHOD(TestReplaceEveryFourthCharWithDotRec)
        {
            char str1[] = "abcdefghijklmnopqrstuvwxyz";
            char expectedResult1[] = "abc.efg.hij.klm.nop.qrs.tuv.wxy.z";
            char str2[] = "abc";
            char expectedResult2[] = "abc";

            ReplaceEveryFourthCharWithDotRec(str1);
            ReplaceEveryFourthCharWithDotRec(str2);

            Assert::AreEqual(-1, strcmp(expectedResult1, str1));
            Assert::AreEqual(0, strcmp(expectedResult2, str2));
        }
	};
}