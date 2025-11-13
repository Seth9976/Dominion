// 函数: _ZN5Botan3TLS7Channel16activate_sessionEv
// 地址: 0xe5cf74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x0 = *(entry_x0 + 0x40)
void* x8 = *(entry_x0 + 0x48)
*(entry_x0 + 0x40) = x8
*(entry_x0 + 0x48) = 0

if (x0 != 0)
    (*(*x0 + 8))()
    x8 = *(entry_x0 + 0x40)

if (zx.d(*(x8 + 0x21)) u<= 0xfa)
    int64_t* x0_1 = *(entry_x0 + 0x38)
    
    if (x0_1 == 0)
        int16_t x0_6
        int64_t* x1_4
        x0_6, x1_4 = Botan::assertion_failure("m_sequence_numbers", 
            "Have a sequence numbers object", "sequence_numbers", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)
        return sub_e5d01c(x0_6, x1_4) __tailcall
    
    int16_t x0_2 = (*(*x0_1 + 0x28))()
    sub_e5d01c(x0_2, entry_x0 + 0x50)
    sub_e5d01c(x0_2, entry_x0 + 0x68)

jump(*(**(entry_x0 + 0x18) + 0x30))
