float n1=1/3, n2=1/3;
float t=0.00001;
//relative
BOOST_REQUIRE_CLOSE(n1,n2,t);
//absolute
BOOST_REQUIRE_CLOSE_FRACTION(n1,n2,t);