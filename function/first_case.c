#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

/*Test cases */
static void null_test_success(void **state)  /*null_test_successֻ��һ�����Ժ��������ƣ����Ըĳ������ַ���*/
{
	(void) state ;
		
}


/*Test applications */
int main()
{
   const struct CMUnitTest tests[]={cmocka_unit_test(null_test_success),};	 //cmock_unit_test����test case��ʼ��һ��table,Ȼ��table�����ݸ�run_tests()����ִ�в���.
                                                                             //run_tests()������ÿ�����Ժ���֮ǰ�����ʵ����쳣/�źŴ��������������ݽṹ��
																			 //��һ�������ĵ�Ԫ��������Ժ�run_tests()ִ�и��ּ����ȷ�������Ƿ�ɹ�

    
    return cmocka_run_group_tests(tests, NULL, NULL);
	
	//return cmocka_run_group_tests_name("test_success",tests,NULL,NULL);    //�������֣�����������Լ��������

}