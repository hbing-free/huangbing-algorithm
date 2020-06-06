#include "A.h"
#include <gtest/gtest.h>
class A_test : public testing::Test {
protected:
A* _p_a;
virtual void SetUp( ){//初始化函数
this->_p_a = new A( 1 );
}
virtual void TearDown( ){ //清理函数
delete this->_p_a;
}
};
//第一个测试，参数A_test是上面的那个类，第二个参数FirstAdd是测试名称
TEST_F( A_test,FirstAdd ){
EXPECT_EQ( 1,_p_a->getA( ) );
_p_a->add( 3 );
EXPECT_EQ( 4,_p_a->getA( ) );
}
//第二个测试
TEST_F( A_test,SecondAdd ){
EXPECT_EQ( 1,_p_a->getA( ) );
_p_a->add( 5 );
EXPECT_EQ( 6,_p_a->getA( ) );
}

/*
上面的两个测试都是在SetUp函数执行后的状态下执行，也就是说在执行任意一个TEST_F时 _p_a->_a 的值都是初始值1
*/

TEST_F( A_test,f1 ){
EXPECT_TRUE(_p_a->f1(1));
}
