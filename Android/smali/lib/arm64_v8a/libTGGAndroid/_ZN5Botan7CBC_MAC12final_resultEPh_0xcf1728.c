// 函数: _ZN5Botan7CBC_MAC12final_resultEPh
// 地址: 0xcf1728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x18)
int64_t x8 = *(arg1 + 0x20)
uint8_t* x19 = arg1

if (x21 == x8)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    if (*(x19 + 0x30) != 0)
        int64_t* x22_1 = *(x19 + 0x10)
        (*(*x22_1 + 0x48))(x22_1, x21, x21, (x8 - x21) u/ (*(*x22_1 + 0x30))(x22_1))
        x21 = *(x19 + 0x18)
        x8 = *(x19 + 0x20)
    
    if (x8 == x21)
        *(x19 + 0x30) = 0
        return 
    
    int64_t entry_x1
    
    if (entry_x1 != 0 && x21 != 0)
        memmove(entry_x1, x21, x8 - x21)
        arg1 = *(x19 + 0x18)
        int64_t x8_3 = *(x19 + 0x20)
        
        if (x8_3 != arg1)
            memset(arg1, 0, x8_3 - arg1)
        
        *(x19 + 0x30) = 0
        return 

uint8_t* x0_5
uint64_t x1_2
x0_5, x1_2 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::CBC_MAC::key_schedule(x0_5, x1_2) __tailcall
