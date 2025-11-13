// 函数: sub_60e8c0
// 地址: 0x60e8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_64e7a0(arg1)
*(eax_2 + 0x18bc) = sub_609360
sub_60de40(eax_2, 4, arg1, 0)
void* var_c98
int32_t eax_3 = sub_571770(data_ccf6cc, &var_c98)
int32_t edi = 0
int32_t var_c94 = eax_3
int32_t var_c90[0x321]

if (eax_3 s> 0)
    void* esi_1 = var_c98
    
    while (true)
        int32_t ecx_3 = 0
        int32_t* edx_1 = esi_1 + 0xa8
        
        while (true)
            int32_t eax_4 = *edx_1
            
            if (eax_4 == 0)
                break
            
            if (eax_4 == 0x12 || eax_4 == 0x13)
                var_c90[edi] = esi_1
                edi += 1
                break
            
            ecx_3 += 1
            edx_1 = &edx_1[0x2d]
            
            if (ecx_3 s>= 8)
                break
            
            continue
        
        esi_1 += 0x698
        int32_t temp0_1 = var_c94
        var_c94 -= 1
        
        if (temp0_1 == 1)
            break

int32_t esi_2 = data_ccf6d0

if (esi_2 != 0)
    uint32_t eax_5 = sub_64e7a0(arg1)
    sub_665db0(eax_5, &data_be5d98, eax_5, 0x3f800000, 0xffffffff, 0)
    esi_2 = data_ccf6d0

int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(edi + 7)
void* edx_5 = edi - (esi_2 << 3)

if (edx_5 s> 8)
    edx_5 = 8

void* eax_10 = ((eax_7 + (edx_2 & 7)) s>> 3) - 1
var_c98 = edx_5

if (esi_2 s< eax_10)
    uint32_t eax_11 = sub_64e7a0(arg1)
    eax_10 = sub_665db0(eax_11, &data_be5da4, eax_11, 0x3f800000, 0xffffffff, 0)
    edx_5 = var_c98

int32_t var_cac = 0xffffffff
sub_666120(eax_10, &data_be6188, arg1, edx_5)
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = data_1a957d8
struct _EXCEPTION_REGISTRATION_RECORD** result

for (void* i = nullptr; i s< 8; i += 1)
    bool cond:0_1 = data_1a957bc != "tbl_achievements"
    var_c98 = i + (data_ccf6d0 << 3)
    uint32_t eax_14
    
    if (not(cond:0_1) && data_1a957b8 == arg1 && data_1a957c0 == i && data_1a957c4 == 0
            && result_1 != 0)
        eax_14 = zx.d(result_1.w)
    
    if (cond:0_1 || data_1a957b8 != arg1 || data_1a957c0 != i || data_1a957c4 != 0 || result_1 == 0
            || eax_14 u>= data_c23bac || *(eax_14 * 0x18d0 + data_c23ba8 + 0x18c8) != result_1)
        result = sub_67be20(i)
        result_1 = result
        data_1a957d8 = result_1
        
        if (result_1 != 0)
            data_1a957bc = "tbl_achievements"
            data_1a957b8 = arg1
            data_1a957c0 = i
            data_1a957c4 = 0
            result = result_1
    else
        result = result_1
    
    void* edx_7 = var_c98
    
    if (edx_7 s>= edi)
        break
    
    if (result != 0)
        result = sub_60d590(result, var_c90[edx_7], result, 0)
        result_1 = data_1a957d8

CookieCheckFunction(result)
return result
