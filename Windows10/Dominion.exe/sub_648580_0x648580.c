// 函数: sub_648580
// 地址: 0x648580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c6bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg3
int32_t* var_2c = eax_3
char const* const var_74_1
int32_t var_70_1
char const* const var_6c_1
char* ecx

if (eax_3[1] != 2)
    var_6c_1 = "StructureDefGet"
    var_70_1 = 0x313
    var_74_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
label_648906:
    sub_63b870(eax_3, &data_801800, ecx, var_74_1, var_70_1, var_6c_1)
label_64890e:
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

uint32_t result = sub_5af880(arg3)

if (*result != 0)
    void* esi_1 = *fsbase->ThreadLocalStoragePointer
    
    if (data_1a98f70 s> *(esi_1 + 8))
        sub_75970e(&data_1a98f70)
        
        if (data_1a98f70 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1a98f74 = sub_69f030("sys/draw3d.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1a98f70)
    
    if (data_1a98f78 s> *(esi_1 + 8))
        sub_75970e(&data_1a98f78)
        
        if (data_1a98f78 == 0xffffffff)
            int32_t var_8_3 = 1
            data_1a98f7c = sub_69f030("sys/pbr/brdf_lut.texture", 3)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_1a98f78)
    
    int32_t* eax_7 = *result
    uint32_t edi_1 = arg5
    int32_t i_1 = 0
    
    if (*eax_7 s> 0)
        int32_t ecx_3 = 0
        int32_t var_20_1 = 0
        int32_t i
        
        do
            int32_t esi_2 = 0
            float ebx_3 = eax_7[2] + ecx_3
            int32_t* ecx_4 = arg4
            eax_3 = ecx_4[2]
            bool cond:0_1 = eax_3 == 0
            int32_t* var_24
            void* edx
            
            if (eax_3 s> 0)
                int32_t* edi_2 = nullptr
                
                do
                    char* _Str2 = *(edi_2 + *ecx_4)
                    char* _Str2_1 = _Str2
                    var_24 = &_Str2_1[1]
                    int32_t* eax_9
                    
                    do
                        eax_9.b = *_Str2_1
                        _Str2_1 = &_Str2_1[1]
                    while (eax_9.b != 0)
                    
                    if (_strnicmp(*(ebx_3 i+ 8), _Str2, _Str2_1 - var_24) == 0)
                        edx = esi_2 * 0x30 + *arg4
                        goto label_648707
                    
                    ecx_4 = arg4
                    esi_2 += 1
                    edi_2 = &edi_2[0xc]
                    eax_3 = ecx_4[2]
                while (esi_2 s< eax_3)
                
                cond:0_1 = eax_3 == 0
            
            if (cond:0_1)
                var_6c_1 = "GetMaterialEntry"
                var_70_1 = 0x7fd
                var_74_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
                ecx = "materialTable.numMaterials"
                goto label_648906
            
            edx = *ecx_4
        label_648707:
            int32_t esi_3 = *(edx + 0x28)
            int32_t* eax_11 = *(edx + 0x10)
            int32_t var_78_1
            int32_t* var_74_3
            int32_t var_70_3
            uint32_t var_6c_3
            float ecx_6
            int32_t* var_44
            
            if (esi_3 == 0)
            label_64875e:
                int32_t esi_4 = *(edx + 0x20)
                int32_t edi_6
                
                if (esi_4 != 0)
                    edi_6 = *(edx + 0x18)
                
                if (esi_4 == 0 || edi_6 == 0)
                    int32_t ecx_7 = *(edx + 0x18)
                    
                    if (ecx_7 == 0)
                        if (esi_4 != 0)
                            var_44 = eax_11
                            int32_t var_40_2 = sub_5bc1e0(edx + 0x20)
                            int32_t var_3c_2 = data_1a98f7c
                            int32_t var_38_2 = 0
                            int32_t eax_20 = sub_5bc1e0(edx + 8)
                            sub_63b870(sub_647050(eax_20, arg2, ebx_3, eax_20, &var_44, 3, arg5), 
                                &data_801800, "Halt", "C:\x\ax2017\Engine\Draw3d.cpp", 0x852, 
                                "Draw3DStructureMaterialTableMatrixOverrides")
                            goto label_64890e
                        
                        int32_t ecx_8 = *(edx + 8)
                        edi_1 = arg5
                        var_6c_3 = edi_1
                        
                        if (ecx_8 == 0)
                            if (eax_11 == 0)
                                var_70_3 = 0
                                var_74_3 = nullptr
                            else
                                var_24 = eax_11
                                eax_11 = &var_24
                                var_70_3 = 1
                                var_74_3 = &var_24
                            
                            var_78_1 = data_1a98f74
                        else
                            var_24 = eax_11
                            eax_11 = &var_24
                            var_70_3 = 1
                            var_74_3 = &var_24
                            var_78_1 = ecx_8
                    else
                        edi_1 = arg5
                        var_6c_3 = edi_1
                        int32_t* var_34 = eax_11
                        eax_11 = &var_34
                        var_70_3 = 2
                        var_74_3 = &var_34
                        var_78_1 = *(edx + 8)
                        int32_t var_30_1 = ecx_7
                else
                    var_44 = eax_11
                    int32_t var_40_1 = edi_6
                    edi_1 = arg5
                    var_6c_3 = edi_1
                    int32_t var_38_1 = data_1a98f7c
                    eax_11 = &var_44
                    var_70_3 = 4
                    var_74_3 = &var_44
                    var_78_1 = *(edx + 8)
                    int32_t var_3c_1 = esi_4
                
                ecx_6 = ebx_3
            else
                int32_t edi_4 = *(edx + 0x18)
                
                if (edi_4 == 0)
                    if (esi_3 == 0)
                        goto label_64875e
                    
                    var_44 = eax_11
                    int32_t var_40_3 = sub_5bc1e0(edx + 0x20)
                    int32_t var_3c_3 = sub_5bc1e0(edx + 0x28)
                    int32_t var_38_3 = data_1a98f7c
                    int32_t eax_26 = sub_5bc1e0(edx + 8)
                    sub_63b870(sub_647050(eax_26, arg2, ebx_3, eax_26, &var_44, 4, arg5), 
                        &data_801800, "Halt", "C:\x\ax2017\Engine\Draw3d.cpp", 0x842, 
                        "Draw3DStructureMaterialTableMatrixOverrides")
                    goto label_64890e
                
                int32_t* var_58 = eax_11
                ecx_6 = ebx_3
                int32_t var_54_1 = edi_4
                edi_1 = arg5
                int32_t var_50_1 = *(edx + 0x20)
                var_6c_3 = edi_1
                int32_t var_48_1 = data_1a98f7c
                eax_11 = &var_58
                var_70_3 = 5
                var_74_3 = &var_58
                var_78_1 = *(edx + 8)
                int32_t var_4c_1 = esi_3
            sub_647050(eax_11, arg2, ecx_6, var_78_1, var_74_3, var_70_3, var_6c_3)
            i = i_1 + 1
            ecx_3 = var_20_1 + 0x150
            i_1 = i
            eax_7 = *result
            var_20_1 = ecx_3
        while (i s< *eax_7)
    
    result = sub_647d70(eax_7, arg2, var_2c, edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
