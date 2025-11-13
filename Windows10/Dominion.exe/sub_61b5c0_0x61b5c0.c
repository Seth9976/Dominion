// 函数: sub_61b5c0
// 地址: 0x61b5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 0)
    return 

arg1 = zx.d(arg2.w)

if (arg1 u>= data_b809e4 || *(arg1 * 0x1c30 + data_b809e0 + 0x1c28) != arg2)
    return 

arg1 = sub_5cba00(arg2)

if (*(arg1 + 0x2c) == 2)
    return 

void var_10
int32_t ecx_2 = sub_6938e0(arg3, &var_10)

if (arg4 != 0)
    if (arg4 != 1)
        return 
    
    sub_5d0dc0(arg1)
    return 

int32_t eax_4 = *(arg1 + 0x2c)
bool cond:0_1

if (eax_4 == 1)
    cond:0_1 = *(arg1 + 0x174) == eax_4
label_61b643:
    
    if (cond:0_1)
        sub_5d0dc0(arg1)
        return 
else if (eax_4 == 0)
    cond:0_1 = *(arg1 + 0xa4) == 0x3f1
    goto label_61b643
int32_t eax_5 = sub_4dad50()

if (eax_5 == 1 && (*(arg1 + 0x2c) != eax_5 || *(arg1 + 0x174) != eax_5))
    sub_5d0dc0(arg1)
    return 

int32_t var_1c_1 = 0
sub_617bb0(eax_5, &var_10, arg1, 1, ecx_2)
