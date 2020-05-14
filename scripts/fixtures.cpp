struct UGbase
{
    //Call UGInit before testcase starts
    UGbase()
    {
        ug::UGInit(&framework::master_test_suite().argc, &framework::master_test_suite().argv);
    }
    //call UGFinalize after test case ends
    ~UGbase()  {
        ug::UGFinalize();
    }
};
BOOST_AUTO_TEST_SUITE(fixtureshowsuite)
BOOST_AUTO_TEST_CASE(fixtureshowcase, UGbase){
    //your test needing a clean ug
}
BOOST_AUTO_TEST_SUITE_END()