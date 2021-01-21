
#include "ip_port_filter.h"

int main()
{
	//filter_info info;
	//info.source_ip = info.dest_ip = "192.168.5.212";
	//info.dir = data_direction::dir_in;
	//info.defens_type = defense_type::block;
	//uint64_t rule_id = ip_port_filter::instance().filter(static_cast<int>(filter_msg::ip), info);
	//ip_port_filter::instance().delte_rule(rule_id);


	//filter_info info;
	//info.source_ip = "192.168.5.83";
	//info.dest_ip = "192.168.5.212";
	//info.dest_port = "10808";
	//info.dir = data_direction::dir_in;
	//info.defens_type = defense_type::block;
	//uint64_t rule_id = ip_port_filter::instance().filter(static_cast<int>(filter_msg::tcp_protocol), info);
	//ip_port_filter::instance().delte_rule(rule_id);


	//filter_info info;
	//info.source_ip = "192.168.5.212";
	//info.dest_ip = "192.168.5.212";
	//info.dest_port = "4444";
	//info.dir = data_direction::dir_in;
	//info.defens_type = defense_type::block;
	//uint64_t rule_id = ip_port_filter::instance().filter(static_cast<int>(filter_msg::udp_protocol), info);
	//ip_port_filter::instance().delte_rule(rule_id);

	//暂时不知道怎么测试 
	//filter_info info;
	//info.source_ip = "192.168.5.83";
	//info.dest_ip = "192.168.5.212";
	//info.dir = data_direction::dir_in;
	//info.defens_type = defense_type::block;
	//uint64_t rule_id = ip_port_filter::instance().filter(static_cast<int>(filter_msg::icmp_protocol), info);
	//ip_port_filter::instance().delte_rule(rule_id);

	return 0;
}
