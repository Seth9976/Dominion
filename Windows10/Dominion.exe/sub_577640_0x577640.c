// 函数: sub_577640
// 地址: 0x577640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t i = 7
int32_t* eax_3 = arg3 + 0x159c
int32_t i_4 = 7
uint32_t result = 0
int32_t* var_428 = eax_3
void var_418

do
    int32_t edx = *eax_3
    
    if (edx != 0)
        uint32_t esi_1 = zx.d(edx.w)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t i_2 = i
        char eax_7 = sub_5846c0(&var_418, sub_576540(&var_418, arg2, arg3, &var_418), arg3, 
            &var_418, 0x26, *(esi_1 * 0x64 + arg3 + 0x1a4c))
        int32_t eax_9
        int32_t edx_3
        
        if (eax_7 != 0)
            edx_3:eax_9 = sx.q(*(arg3 + 0x19e4))
            *(arg3 + 0xd38)
        
        if (eax_7 == 0 || divs.dp.d(edx_3:eax_9, *(arg3 + 0xd38)) s>= 5)
            *(arg4 + (result << 2)) = *var_428
            result += 1
        
        i = i_4
        eax_3 = var_428
    
    i += 1
    eax_3 = &eax_3[4]
    i_4 = i
    var_428 = eax_3
while (i s< 0x21)

int32_t i_1 = 0x27
void* eax_13 = arg3 + 0x179c
int32_t i_5 = 0x27
void* var_428_1 = eax_13

do
    int32_t edx_5 = *eax_13
    
    if (edx_5 != 0)
        uint32_t esi_3 = zx.d(edx_5.w)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t i_3 = i_1
        char eax_17 = sub_5846c0(&var_418, sub_576540(&var_418, arg2, arg3, &var_418), arg3, 
            &var_418, 0x26, *(esi_3 * 0x64 + arg3 + 0x1a4c))
        int32_t eax_19
        int32_t edx_8
        
        if (eax_17 != 0)
            edx_8:eax_19 = sx.q(*(arg3 + 0x19e4))
            *(arg3 + 0xd38)
        
        if (eax_17 == 0 || divs.dp.d(edx_8:eax_19, *(arg3 + 0xd38)) s>= 5)
            *(arg4 + (result << 2)) = *var_428_1
            result += 1
        
        i_1 = i_5
        eax_13 = var_428_1
    
    i_1 += 1
    eax_13 += 0x10
    i_5 = i_1
    var_428_1 = eax_13
while (i_1 s< 0x47)

CookieCheckFunction(result)
return result
