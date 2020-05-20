void some_function(int n){
    if(n == -1){
        throw Exception;
    }
}
BOOST_AUTO_TEST_SUITE(exceptionshowsuite)
    BOOST_AUTO_TEST_CASE(tst_some_function_exceptions){
        BOOST_CHECK_NO_THROW( some_function(0) );
        BOOST_CHECK_THROW( some_function(-1), Exception );
    }

BOOST_AUTO_TEST_SUITE_END()