// 函数: _ZN5Botan3TLS18New_Session_TicketC1ERNS0_12Handshake_IOERNS0_14Handshake_HashE
// 地址: 0xe53748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
*(arg1 + 0x10) = 0
(*(*arg2 + 8))(arg2, arg1)
int64_t* entry_x2
void* x24 = *entry_x2
int64_t x23 = entry_x2[1]
void* result
void* result_2 = result
size_t x25 = x23 - x24
int64_t var_70
uint64_t x27 = var_70 - result_2 + x25

if (entry_x2[2] - x24 u< x27)
    int64_t x0_2 = operator new(x27)
    x23 = x0_2 + x25
    
    if (x25 s>= 1)
        memcpy(x0_2, x24, x25)
    
    *entry_x2 = x0_2
    entry_x2[1] = x23
    entry_x2[2] = x0_2 + x27
    
    if (x24 != 0)
        operator delete(x24)
        x23 = entry_x2[1]
        result_2 = result

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x2, x23, result_2)

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
