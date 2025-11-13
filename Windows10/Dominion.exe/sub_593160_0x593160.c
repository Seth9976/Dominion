// 函数: sub_593160
// 地址: 0x593160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_5930a0(arg1)
int32_t result = sub_5930a0(arg2)

if (eax == 0 && result == 0)
label_59318b:
    result = *arg1
    int32_t temp0_1 = *arg2
    
    if (result s>= temp0_1)
        if (result s<= temp0_1)
            return sub_592f50(sub_593100(arg1), sub_593100(arg2))
        
        result.b = 0
        return result
else if (eax s<= result)
    if (eax s>= result)
        goto label_59318b
    
    result.b = 0
    return result

result.b = 1
return result
