/*
 * asio 동기 타이머 사용 예제
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>

#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>


void print_timer_function(const boost::system::error_code& /* e */, boost::asio::deadline_timer* pTimer, int* pCount) {
	if (*pCount < 5) {
	
	}
}



// 비동기 타이머.
void timer_wait_test(void) {
	boost::asio::io_service io;
	boost::asio::deadline_timer timer(io, boost::posix_time::seconds(2));

	//timer.async_wait(&print_timer_function);
	
	io.run();
}



int main(void) {
	timer_wait_test();

	return 0;
}	
