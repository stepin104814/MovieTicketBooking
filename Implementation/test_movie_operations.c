#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <Movie.h>
#define PROJECT_NAME    "Movie"

/* Prototypes for all the test functions */
void test_Signin(void);
void test_Login(void);
void test_Book_tickect(void);
void test_show_details(void);
void test_cancel(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "Signin", test_Signin);
  CU_add_test(suite, "Login", test_Login);
  CU_add_test(suite, "Book_ticket", test_Book_ticket);
  CU_add_test(suite, "show_details", test_show_details);
  CU_add_test(suite, "cancel", test_cancel);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_Signin(void) {
  CU_ASSERT_EQUAL(0 == Signin(struct user person[]));

  /* Dummy fail*/
  //CU_ASSERT(1500 == add(750, 7500));
}

void test_Login(void) {
  CU_ASSERT_EQUAL(0 == Login(struct user person[]));

  /* Dummy fail*/
 // CU_ASSERT(1 == subtract(1000, 900));
}

void test_Book_ticket(void) {
  CU_ASSERT_EQUAL(1 == Book_ticket(int x, struct user person[));

  /* Dummy fail*/
  //CU_ASSERT(2 == multiply(2, 5));
}

void test_show_details(void) {
  CU_ASSERT_EQUAL(sucess/Failure == show_details(int x, struct user person[)));
//#define TEST_ASSERT_EQUAL_STRING(expected, actual)
  /* Dummy fail*/
  //CU_ASSERT(3 == divide(2, 2));
}

void test_cancel(void) {
  CU_ASSERT_EQUAL(1 == cancel(int x, struct user person[));

  /* Dummy fail*/
  //CU_ASSERT(3 == divide(2, 2));
}

