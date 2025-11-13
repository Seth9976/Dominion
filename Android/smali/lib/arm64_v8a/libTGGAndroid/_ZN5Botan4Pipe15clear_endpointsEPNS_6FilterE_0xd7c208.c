// 函数: _ZN5Botan4Pipe15clear_endpointsEPNS_6FilterE
// 地址: 0xd7c208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (entry_x1 == 0)
    return 

int64_t* x25_1 = *(entry_x1 + 0x20)

if (*(entry_x1 + 0x28) == x25_1)
    return 

int64_t i = 0

do
    int64_t x23_1 = x25_1[i]
    
    if (x23_1 != 0 &&
            __dynamic_cast(x23_1, _typeinfo_for_Botan::Filter, _typeinfo_for_Botan::SecureQueue, 0) != 0)
        x25_1[i] = 0
        (*(entry_x1 + 0x20))[i]
    
    Botan::Pipe::clear_endpoints(arg1)
    x25_1 = *(entry_x1 + 0x20)
    i += 1
while (i != (*(entry_x1 + 0x28) - x25_1) s>> 3)
