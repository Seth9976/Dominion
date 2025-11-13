// 函数: _ZN5Botan3TLS14Session_TicketC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6d538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x2
uint64_t x20 = zx.q(entry_x2)
void* x19 = arg2
*arg1 = _vtable_for_Botan::TLS::Session_Ticket + 0x10
uint32_t x25 = zx.d(entry_x2)
int64_t result = Botan::TLS::TLS_Data_Reader::assert_at_least(arg2)
__builtin_memset(arg1 + 8, 0, 0x18)

if (x25 != 0)
    char* x0_2 = operator new(x20)
    void* x26_1 = &x0_2[x20]
    *(arg1 + 8) = x0_2
    *(arg1 + 0x18) = x26_1
    result = memset(x0_2, 0, x20)
    *(arg1 + 0x10) = x26_1
    int64_t* x8_1 = *(x19 + 8)
    int64_t x9_1 = *(x19 + 0x10)
    *x0_2 = (*x8_1)[x9_1]
    
    if (x25 != 1)
        x0_2[1] = *(*x8_1 + x9_1 + 1)
        
        if (zx.d(entry_x2) != 2)
            int64_t x8_5 = 2
            
            do
                (*(arg1 + 8))[x8_5] = (**(x19 + 8) + *(x19 + 0x10))[x8_5]
                x8_5 += 1
            while (x20 != x8_5)

*(x19 + 0x10) += x20
return result
