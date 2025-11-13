// 函数: _ZN5Botan3TLS25Session_Manager_In_Memory21load_from_server_infoERKNS0_18Server_InformationERNS0_7SessionE
// 地址: 0xe82250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
void* i = *(arg1 + 0x80)
int32_t x20_1

if (i == 0)
    x20_1 = 0
else
    void* __offset(Botan::TLS::Server_Information, 0x80) i_1 = arg1 + 0x80
    
    do
        int32_t temp0_1 = Botan::TLS::operator<(i + 0x20, arg2) & 1
        int64_t x8_1
        
        x8_1 = temp0_1 != 0 ? 8 : 0
        
        if (temp0_1 == 0)
            i_1 = i
        
        i = *(i + x8_1)
    while (i != 0)
    
    if (i_1 == arg1 + 0x80)
        x20_1 = 0
    else if ((Botan::TLS::operator<(arg2, i_1 + 0x20) & 1) != 0)
        x20_1 = 0
    else if ((Botan::TLS::Session_Manager_In_Memory::load_from_session_str(arg1, i_1 + 0x58) & 1)
            == 0)
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::TLS::Server_Information, std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::TLS::Server_Information>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::erase(
            arg1 + 0x78)
        x20_1 = 0
    else
        x20_1 = 1

std::__ndk1::mutex::unlock()
return zx.q(x20_1)
