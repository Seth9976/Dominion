// 函数: sub_64c550
// 地址: 0x64c550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = arg2
float var_20 = xmm1
float xmm2 = arg2 f- arg1[0x23]
float var_18

if (arg1[0x1f] f+ arg1[0x1e] > xmm2 || arg1[0x1b] s> 1)
    float xmm0_3 = sub_67f6b0(arg1, xmm1 f- arg1[0x22])
    float xmm0_4 = sub_67f6b0(&arg1[0xf], xmm2)
    xmm1 = var_20
    var_18 = sub_64c3c0(&arg1[0x1e], xmm2) * (xmm0_4 - xmm0_3) + xmm0_3
else
    var_18 = arg1[0xf]

float xmm2_5 = xmm1 f- arg1[0x47]
float var_14_2

if (arg1[0x43] f+ arg1[0x42] > xmm2_5 || arg1[0x3f] s> 1)
    float xmm0_11 = sub_67f6b0(&arg1[0x24], xmm1 f- arg1[0x46])
    float xmm0_12 = sub_67f6b0(&arg1[0x33], xmm2_5)
    xmm1 = var_20
    var_14_2 = sub_64c3c0(&arg1[0x42], xmm2_5) * (xmm0_12 - xmm0_11) + xmm0_11
else
    var_14_2 = arg1[0x33]

float xmm2_10 = xmm1 f- arg1[0x6b]
float var_10_3

if (arg1[0x67] f+ arg1[0x66] > xmm2_10 || arg1[0x63] s> 1)
    float xmm0_19 = sub_67f6b0(&arg1[0x48], xmm1 f- arg1[0x6a])
    float xmm0_20 = sub_67f6b0(&arg1[0x57], xmm2_10)
    xmm1 = var_20
    var_10_3 = sub_64c3c0(&arg1[0x66], xmm2_10) * (xmm0_20 - xmm0_19) + xmm0_19
else
    var_10_3 = arg1[0x57]

float xmm2_15 = xmm1 f- arg1[0x8f]
float xmm2_16

if (arg1[0x8b] f+ arg1[0x8a] > xmm2_15 || arg1[0x87] s> 1)
    float xmm0_26 = sub_67f6b0(&arg1[0x6c], xmm1 f- arg1[0x8e])
    float xmm0_27 = sub_67f6b0(&arg1[0x7b], xmm2_15)
    xmm2_16 = sub_64c3c0(&arg1[0x8a], xmm2_15) * (xmm0_27 - xmm0_26) + xmm0_26
else
    xmm2_16 = arg1[0x7b]

*arg3 = var_18
arg3[1] = var_14_2
arg3[2] = var_10_3 + var_18
arg3[3] = xmm2_16 + var_14_2
return arg3
