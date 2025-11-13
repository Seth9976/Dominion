// 函数: sub_74b3b0
// 地址: 0x74b3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0
char* edx = arg1
int32_t var_c = 0
int32_t var_10 = 0
va_list ecx = &edx[1]
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)

if (edx != ecx)
    int32_t* var_20_1 = &var_8
    int32_t* var_24_1 = &var_c
    int32_t* var_28_1 = &var_10
    
    if (sub_64b6d0(&var_10, edx - ecx, ecx, arg1, "#%02x%02x%02x") == 0)
        int32_t eax_2
        va_list ecx_1
        int32_t edx_2
        eax_2, edx_2, ecx_1 = strchr(arg1, 0x2c)
        int32_t* var_20_2 = &var_8
        int32_t* var_24_3 = &var_c
        int32_t* var_28_2 = &var_10
        char* var_2c_1
        
        if (eax_2 == 0)
            var_2c_1 = "%d %d %d"
        else
            var_2c_1 = "%d,%d,%d"
        
        sub_64b6d0(&var_10, edx_2, ecx_1, arg1, var_2c_1)

return (zx.d(var_8.b) << 8 | zx.d(var_c.b)) << 8 | zx.d(var_10.b)
