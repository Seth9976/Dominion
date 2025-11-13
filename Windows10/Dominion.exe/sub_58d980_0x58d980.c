// 函数: sub_58d980
// 地址: 0x58d980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
uint32_t result = arg4 - 1
int32_t var_18
char const* const var_14
char* ecx_6

if (result u> 0x3f)
label_58dbc6:
    var_14 = "CardMeetsFlag"
    var_18 = 0x4060
    ecx_6 = "Halt"
label_58dbdf:
    sub_63b870(result, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_18, 
        var_14)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

result = zx.d(lookup_table_58dc18[result])
int32_t ecx_16

switch (result)
    case 0
        if ((*(sub_571b30(arg2, arg3) + 0x98) & 0x20) == 0)
            result.b = 0
            return result
        
    label_58dad6:
        result.b = 1
        return result
    case 1
        if ((*(sub_571b30(arg2, arg3) + 0x98) & 0x20) == 0)
            goto label_58dad6
        
        result.b = 0
        return result
    case 2
        result = sub_571b30(arg2, arg3)
        int32_t edx_3 = *(result + 0x18)
        int32_t ecx_5 = *(result + 0x1c)
        
        if (edx_3 != 0 || ecx_5 != 1)
            if (*(result + 0x20) != 0xffffffff)
                var_14 = "CardHasProp"
                var_18 = 0x4036
                ecx_6 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
                goto label_58dbdf
            
            if (ecx_5 s>= 0 && (ecx_5 s> 0 || edx_3 u>= 0) && (ecx_5 & 2) != 0)
                goto label_58dad6
        
        result = sub_571b30(arg2, arg3)
        
        if ((*(result + 0x98) & 0x40) != 0)
            int32_t ecx_12 = 0
            result += 0xac
            
            while (true)
                int32_t edx_5 = *(result - 4)
                
                if (edx_5 == 0)
                    break
                
                if (edx_5 == 6 && *result == 0 && *(result + 8) == 5)
                    goto label_58dad6
                
                ecx_12 += 1
                result += 0xb4
                
                if (ecx_12 s>= 8)
                    result.b = 0
                    return result
        
        result.b = 0
        return result
    case 3
        result = sub_571b30(arg2, arg3)
        int32_t ecx_15 = *(result + 0x18)
        int32_t edx_7 = *(result + 0x1c)
        
        if (ecx_15 == 0 && edx_7 == 1)
            result.b = 0
            return result
        
        if (*(result + 0x20) != 0xffffffff)
            var_14 = "CardHasProp"
            var_18 = 0x4036
            ecx_6 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
            goto label_58dbdf
        
        if (edx_7 s<= 0 && (edx_7 s< 0 || ecx_15 u< 0))
            result.b = 0
            return result
        
        ecx_16 = ecx_15 & 4
    case 4
        result = sub_571b30(arg2, arg3)
        int32_t ecx_20 = *(result + 0x18)
        int32_t edx_9 = *(result + 0x1c)
        
        if (ecx_20 == 0 && edx_9 == 1)
            result.b = 0
            return result
        
        if (*(result + 0x20) != 0xffffffff)
            var_14 = "CardHasProp"
            var_18 = 0x4036
            ecx_6 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
            goto label_58dbdf
        
        if (edx_9 s> 0 || (edx_9 s>= 0 && ecx_20 u>= 0))
            ecx_16 = ecx_20 & 0x10
            goto label_58dacc
        
        result.b = 0
        return result
    case 5
        result = sub_571b30(arg2, arg3)
        int32_t ecx_22 = *(result + 0x18)
        int32_t edx_11 = *(result + 0x1c)
        
        if (ecx_22 == 0 && edx_11 == 1)
            result.b = 0
            return result
        
        if (*(result + 0x20) != 0xffffffff)
            var_14 = "CardHasProp"
            var_18 = 0x4036
            ecx_6 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
            goto label_58dbdf
        
        if (edx_11 s<= 0 && (edx_11 s< 0 || ecx_22 u< 0))
            result.b = 0
            return result
        
        ecx_16 = ecx_22 & 0x20
    case 6
        result = sub_571b30(arg2, arg3)
        int32_t ecx_24 = *(result + 0x18)
        int32_t edx_13 = *(result + 0x1c)
        
        if (ecx_24 == 0 && edx_13 == 1)
            result.b = 0
            return result
        
        if (*(result + 0x20) != 0xffffffff)
            var_14 = "CardHasProp"
            var_18 = 0x4036
            ecx_6 = "def.props[0].abilityIndex == ABILITY_INDEX_PLAY"
            goto label_58dbdf
        
        if (edx_13 s<= 0 && (edx_13 s< 0 || ecx_24 u< 0))
            result.b = 0
            return result
        
        ecx_16 = ecx_24 & 0x2000
    case 7
        goto label_58dbc6

label_58dacc:

if (ecx_16 != 0)
    goto label_58dad6

result.b = 0
return result
