// 函数: _ZN5Botan8CFB_Mode14shift_registerEv
// 地址: 0xcfe900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8 = *(entry_x0 + 0x48)
size_t x22 = *(entry_x0 + 0x50)
size_t x23 = x8 - x22

if (x8 == x22)
    goto label_cfe930

int64_t x0 = *(entry_x0 + 8)

if (x0 != 0)
    memmove(x0, x0 + x22, x23)
label_cfe930:
    int64_t x21_1 = *(entry_x0 + 8)
    int64_t x20_1 = *(entry_x0 + 0x20)
    
    if (x22 == 0)
        goto label_cfe958
    
    if (x20_1 != 0)
        memmove(x21_1 + x23, x20_1, x22)
        x21_1 = *(entry_x0 + 8)
        x20_1 = *(entry_x0 + 0x20)
    label_cfe958:
        int64_t* x22_1 = *(entry_x0 + 0x40)
        int64_t result = (*(*x22_1 + 0x48))(x22_1, x21_1, x20_1, 
            (*(entry_x0 + 0x10) - x21_1) u/ (*(*x22_1 + 0x30))(x22_1))
        *(entry_x0 + 0x38) = 0
        return result

uint8_t* x0_5
uint64_t x1_4
x0_5, x1_4 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::CFB_Encryption::process(x0_5, x1_4) __tailcall
