// 函数: _ZNK5Botan14XMSS_Signature5bytesEv
// 地址: 0xed2548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int32_t x21 = *entry_x0
void*** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void** result = Botan::allocate_memory(4, 1)
entry_x8[1] = result + 4
entry_x8[2] = result + 4
*entry_x8 = result
*result = (((((x21 << 8 & 0xff0000) | (0xff & x21) << 0x18) & 0xffff0000) | (x21 & 0xffff00) u>> 8)
    & 0xffffff00) | (x21 & 0xff000000) u>> 0x18
char* x21_1 = *(entry_x0 + 8)
int64_t x22 = *(entry_x0 + 0x10)
void*** var_38 = entry_x8

if (x21_1 != x22)
    do
        result = &var_38
        sub_f4a08c(result, x21_1)
        x21_1 = &x21_1[1]
    while (x22 != x21_1)

char** i = *(entry_x0 + 0x20)

for (int64_t x23 = *(entry_x0 + 0x28); i != x23; i = &i[3])
    char* x21_2 = *i
    int64_t x24_1 = i[1]
    var_38 = entry_x8
    
    if (x21_2 != x24_1)
        do
            result = &var_38
            sub_f4a08c(result, x21_2)
            x21_2 = &x21_2[1]
        while (x24_1 != x21_2)

char** i_1 = *(entry_x0 + 0x38)

for (int64_t x22_1 = *(entry_x0 + 0x40); i_1 != x22_1; i_1 = &i_1[3])
    char* x20_1 = *i_1
    int64_t x23_1 = i_1[1]
    var_38 = entry_x8
    
    if (x20_1 != x23_1)
        do
            result = &var_38
            sub_f4a08c(result, x20_1)
            x20_1 = &x20_1[1]
        while (x23_1 != x20_1)

return result
