// 函数: sub_696240
// 地址: 0x696240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

fseek(*arg1, 0, 2)
int32_t ebx = ftell(*arg1)

if (ebx u>= 0xc && fseek(*arg1, arg1[1], 0) == 0 && fread(arg2, 0xc, 1, *arg1) == 1)
    arg1[1] += 0xc
    
    if (*arg2 == 0x5850434b && arg2[1] == 7)
        int32_t eax_1
        eax_1.b = ebx s>= arg2[2] * 0xa8
        return eax_1

int32_t eax
eax.b = 0
return eax
