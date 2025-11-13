// 函数: _ZN5Botan4Pipe14find_endpointsEPNS_6FilterE
// 地址: 0xd7c13c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
int64_t x8 = *(entry_x1 + 0x20)

if (*(entry_x1 + 0x28) == x8)
    return 

int64_t i = 0

do
    int64_t x23_1 = *(x8 + (i << 3))
    int64_t x0_2
    
    if (x23_1 != 0)
        x0_2 =
            __dynamic_cast(x23_1, _typeinfo_for_Botan::Filter, _typeinfo_for_Botan::SecureQueue, 0)
    
    if (x23_1 != 0 && x0_2 == 0)
        Botan::Pipe::find_endpoints(arg1)
    else
        int64_t x0_3 = operator new(0x70)
        Botan::SecureQueue::SecureQueue()
        *(*(entry_x1 + 0x20) + (i << 3)) = x0_3
        Botan::Output_Buffers::add(*(arg1 + 0x10))
    
    x8 = *(entry_x1 + 0x20)
    i += 1
while (i != (*(entry_x1 + 0x28) - x8) s>> 3)
