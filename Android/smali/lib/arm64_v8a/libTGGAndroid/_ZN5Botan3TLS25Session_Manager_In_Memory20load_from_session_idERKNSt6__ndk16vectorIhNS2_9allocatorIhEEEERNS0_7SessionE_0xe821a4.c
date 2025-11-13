// 函数: _ZN5Botan3TLS25Session_Manager_In_Memory20load_from_session_idERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERNS0_7SessionE
// 地址: 0xe821a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
uint8_t* x0_1 = *arg2
Botan::hex_encode(x0_1, *(arg2 + 8) - x0_1, true)
char var_48
int32_t x0_3 = Botan::TLS::Session_Manager_In_Memory::load_from_session_str(arg1, &var_48)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
std::__ndk1::mutex::unlock()
return zx.q(x0_3) & 1
