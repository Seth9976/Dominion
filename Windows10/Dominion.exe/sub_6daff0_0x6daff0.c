// 函数: sub_6daff0
// 地址: 0x6daff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770f15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_c0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_78 = arg2
int32_t* eax_3 = arg3
int32_t* var_4c = eax_3
int32_t* esi = eax_3[1]
int32_t* var_58 = esi
int32_t* var_44

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_44, 2)
    int32_t* var_8_1 = esi
    char* eax_4 = var_44
    char* const ecx_2 = &data_801800
    
    if (eax_4 != 0)
        ecx_2 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_2, esi + 2)
    esi = eax_3
    var_58 = esi
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_44
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_44)
            int32_t temp2_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp2_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, eax_3[3] + 0x10)
                var_44 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
else if (esi[1] != 2)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* var_6c = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

int32_t* eax_5 = *esi
esi[7] += 1
int32_t var_8_4 = 2
int32_t** result = **eax_5
int32_t** result_1 = result

if (result == 0)
    result.b = 0
else
    int32_t* xmm0_1 = (zx.o(0)).d
    uint32_t ebx
    ebx.b = 1
    int32_t* var_48_1 = nullptr
    char var_3e_1 = 1
    int32_t i_1 = 0
    
    if (*result s<= 0)
        result.b = 0
    else
        int32_t ecx_6 = 0
        int32_t var_70_1 = 3
        int32_t var_60_1 = 0
        int32_t i
        
        do
            void* edi_2 = result[2] + ecx_6
            void* var_50_1 = edi_2
            int32_t ecx_7 = *(edi_2 + 0x28)
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(ecx_7)
            
            if (mods.dp.d(edx_3:eax_8, var_70_1) != 0)
                sub_63b870(divs.dp.d(edx_3:eax_8, var_70_1), &data_801800, 
                    "defSubMesh.indexCount % 3 == 0", "C:\x\ax2017\Engine\Structure.cpp", 0x4a2, 
                    "sStructurePolygonDoesIntersectRay")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            var_44 = nullptr
            char var_3d_1 = 1
            
            if (ecx_7 s> 0)
                int32_t ecx_8 = 0
                int32_t var_54_1 = 0
                int32_t j = 0
                char eax_21
                
                do
                    void* eax_10 = *(edi_2 + 0x30)
                    uint32_t edi_3 = zx.d(*(eax_10 + (j << 1) + 2))
                    ebx = zx.d(*(eax_10 + (j << 1) + 4))
                    float var_90[0x5]
                    float* eax_12 =
                        sub_6dad50(&var_90, var_50_1, var_4c, &var_90, zx.d(*(eax_10 + ecx_8)))
                    edi_2 = var_50_1
                    int32_t var_34_1 = eax_12[2]
                    int64_t var_3c = *eax_12
                    float var_a0[0x4]
                    float* eax_15 = sub_6dad50(&var_a0, edi_2, var_4c, &var_a0, edi_3)
                    int32_t var_28_1 = eax_15[2]
                    int64_t var_30_1 = *eax_15
                    float var_b0[0x4]
                    float* eax_18 = sub_6dad50(&var_b0, edi_2, var_4c, &var_b0, ebx)
                    int32_t var_1c_1 = eax_18[2]
                    int64_t var_24_1 = *eax_18
                    float var_68
                    bool cond:2_1 = sub_6e94e0(&var_68, &var_3c, var_78, &var_68) == 0
                    eax_21 = var_3d_1
                    
                    if (not(cond:2_1))
                        xmm0_1 = var_68
                    
                    if (not(cond:2_1) && (eax_21 != 0 || not(var_44 f<= xmm0_1)))
                        eax_21 = 0
                        var_44 = xmm0_1
                        var_3d_1 = 0
                    else
                        xmm0_1 = var_44
                    
                    j += 3
                    ecx_8 = var_54_1 + 6
                    var_54_1 = ecx_8
                while (j s< *(edi_2 + 0x28))
                
                esi = var_58
                ebx.b = var_3e_1
                
                if (eax_21 != 0 || (ebx.b == 0 && var_48_1 f<= xmm0_1))
                    xmm0_1 = var_48_1
                else
                    ebx.b = 0
                    var_48_1 = xmm0_1
                    var_3e_1 = 0
            
            i = i_1 + 1
            ecx_6 = var_60_1 + 0x150
            i_1 = i
            result = result_1
            var_60_1 = ecx_6
        while (i s< *result_1)
        
        if (ebx.b != 0)
            result.b = 0
        else
            *arg4 = xmm0_1
            result.b = 1

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
