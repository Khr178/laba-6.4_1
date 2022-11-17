#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 6.4.1/лаба 6.4.1.cpp"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест641
{
	TEST_CLASS(юніттест641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size1 = 5;
			float arr1[size1] = { -1, 1, 1, 1, 1 };

			const int size2 = 1;
			float arr2[size2] = { -10 };

			const int size3 = 6;
			float arr3[size3] = { -1, 1, 1, 1, 1, -10 };

			assert(find_min_elemenet(arr1, size1) == -1);
			assert(find_min_elemenet(arr2, size2) == -10);
			assert(find_min_elemenet(arr3, size3) == -10);

			std::cout << "test_find_min_elemenet OK" << std::endl;
		}

		void test_find_first_negative_elemenet() {
			const int size1 = 5;
			float arr1[size1] = { 1, 1, 1, 1, 1 };

			const int size2 = 1;
			float arr2[size2] = { -10 };

			const int size3 = 6;
			float arr3[size3] = { -1, 1, 1, 1, 1, -10 };

			assert(find_first_negative_elemenet(arr1, size1) == 0);
			assert(find_first_negative_elemenet(arr2, size2) == -10);
			assert(find_first_negative_elemenet(arr3, size3) == -1);

			std::cout << "test_find_first_negative_elemenet OK" << std::endl;
		}

		void test_find_second_negative_elemenet() {
			const int size1 = 5;
			float arr1[size1] = { 1, 1, 1, 1, 1 };

			const int size2 = 5;
			float arr2[size2] = { -10, 1, 1, 1, 1 };

			const int size3 = 6;
			float arr3[size3] = { -1, 1, 1, 1, 1, -10 };

			assert(find_second_negative_elemenet(arr1, size1) == 0);
			assert(find_second_negative_elemenet(arr2, size2) == 0);
			assert(find_second_negative_elemenet(arr3, size3) == -10);

			std::cout << "test_find_second_negative_elemenet OK" << std::endl;
		}

		void test_find_index() {
			const int size1 = 5;
			float arr1[size1] = { 1, 1, 1, 1, 1 };

			const int size2 = 5;
			float arr2[size2] = { -10, 1, 1, 1, 1 };

			const int size3 = 6;
			float arr3[size3] = { -1, 1, 1, 1, 1, -10 };

			assert(find_index(arr1, size1, 1) == 0);
			assert(find_index(arr2, size2, 1) == 1);
			assert(find_index(arr3, size3, -10) == 5);

			std::cout << "test_find_index OK" << std::endl;
		}

		void test_sum_of_elements_in_range() {
			const int size1 = 5;
			float arr1[size1] = { 1, 1, 1, 1, 1 };

			const int size2 = 5;
			float arr2[size2] = { -10, 1, 1, 1, 1 };

			const int size3 = 6;
			float arr3[size3] = { -1, 1, 1, 1, 1, -10 };

			assert(sum_of_elements_in_range(arr1, size1, 0, 5) == 5);
			assert(sum_of_elements_in_range(arr2, size2, 1, 2) == 1);
			assert(sum_of_elements_in_range(arr3, size3, 4, 6) == -9);

			std::cout << "test_sum_of_elements_in_range OK" << std::endl;
		}

		void test_sort_array_by_abs() {
			const int size1 = 5;
			float arr1[size1] = { 1, -0.11, 0.01, -0.5, -9 };
			float arr1_res[size1] = { 0.01, -0.11, -0.5, 1, -9 };

			sort_array_by_abs(arr1, size1);

			for (int i = 0; i < size1; i++) {
				assert(arr1[i] == arr1_res[i]);
			}

			std::cout << "test_sort_array_by_abs OK" << std::endl;
		}

		void run_tests() {
			
			test_find_first_negative_elemenet();
			test_find_second_negative_elemenet();
			test_find_index();
			test_sum_of_elements_in_range();
			test_sort_array_by_abs();
		}
		};
	};

