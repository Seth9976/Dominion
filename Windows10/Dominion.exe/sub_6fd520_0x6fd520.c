// 函数: sub_6fd520
// 地址: 0x6fd520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QAE@ABV_Locinfo@1@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6fdb00(arg1)
char* eax_3 = arg1[1]

if (eax_3 != 0x19)
    if (eax_3 == 0x12)
        data_147df8c = 2
        int32_t eax_5 = memset(&data_147def0, 0, 0x9c)
        int32_t xmm0_2 = data_8c4634
        data_147df0c = 0x43c80000
        data_147df10 = 0x44160000
        data_147df44 = 0x3f800000
        data_147df48 = arg1
        data_147df84 = xmm0_2
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    if (eax_3 != 0x18)
        if (eax_3 != 2)
            char const* const var_24
            int32_t var_20
            char const* const var_1c
            char* ecx_7
            
            if (eax_3 == 0x1e)
                data_147df8c = 2
                memset(&data_147def0, 0, 0x9c)
                int32_t xmm0_4 = data_8c4634
                data_147df0c = 0x43c80000
                data_147df10 = 0x44160000
                data_147df44 = 0x3f800000
                data_147df48 = arg1
                data_147df84 = xmm0_4
                sub_6f9500()
                arg1[7] -= 1
                eax_3 = sub_69f4a0(sub_69ec60(arg1), 1, arg1, 1)
                
                if (eax_3.b != 0)
                    if (*arg1 == 0)
                        sub_69f4a0(eax_3, 0, arg1, 1)
                    
                    arg1[7] += 1
                    int32_t eax_7 = sub_744940(arg1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_7
                
                var_1c = "AssetCatalogReloadAsWritable"
                var_20 = 0x149
                var_24 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
                ecx_7 = "result"
            else if (eax_3 == 0x1d)
                data_147df8c = 2
                memset(&data_147def0, 0, 0x9c)
                int32_t xmm0_5 = data_8c4634
                data_147df0c = 0x43c80000
                data_147df10 = 0x44160000
                data_147df44 = 0x3f800000
                data_147df48 = arg1
                data_147df84 = xmm0_5
                sub_6f9500()
                arg1[7] -= 1
                eax_3 = sub_69f4a0(sub_69ec60(arg1), 1, arg1, 1)
                
                if (eax_3.b != 0)
                    if (*arg1 == 0)
                        sub_69f4a0(eax_3, 0, arg1, 1)
                    
                    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                    arg1[7] += 1
                    data_1597cbc = arg1
                    void* esi_1 = *ThreadLocalStoragePointer
                    
                    if (data_1a9b254 s> *(esi_1 + 8))
                        sub_75970e(&data_1a9b254)
                        
                        if (data_1a9b254 == 0xffffffff)
                            int32_t var_8_1 = 0
                            data_1a9b258 = sub_69f030("sys/material_editor.ui", 0x1e)
                            int32_t var_8_2 = 0xffffffff
                            __Init_thread_footer(&data_1a9b254)
                    
                    data_1597cc0 = sub_6987e0(data_1a9b258)
                    uint32_t eax_12 = data_1a9b25c
                    
                    if (eax_12 s> *(esi_1 + 8))
                        eax_12 = sub_75970e(&data_1a9b25c)
                        
                        if (data_1a9b25c == 0xffffffff)
                            int32_t var_8_3 = 1
                            data_1a9b260 = sub_697540(data_1a9b258, "tblLayers")
                            int32_t var_8_4 = 0xffffffff
                            eax_12 = __Init_thread_footer(&data_1a9b25c)
                    
                    int32_t eax_14 =
                        sub_6ee530(sub_69be60(eax_12, data_1a9b260, data_1597cc0, sub_751f30))
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_14
                
                var_1c = "AssetCatalogReloadAsWritable"
                var_20 = 0x149
                var_24 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
                ecx_7 = "result"
            else if (eax_3 == 0x22)
                data_147df8c = 2
                memset(&data_147def0, 0, 0x9c)
                int32_t xmm0_6 = data_8c4634
                data_147df0c = 0x43c80000
                data_147df10 = 0x44160000
                data_147df44 = 0x3f800000
                data_147df48 = arg1
                data_147df84 = xmm0_6
                sub_6f9500()
                arg1[7] -= 1
                eax_3 = sub_69f4a0(sub_69ec60(arg1), 1, arg1, 1)
                
                if (eax_3.b != 0)
                    if (*arg1 == 0)
                        sub_69f4a0(eax_3, 0, arg1, 1)
                    
                    arg1[7] += 1
                    int32_t eax_16 = sub_67a0e0(arg1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_16
                
                var_1c = "AssetCatalogReloadAsWritable"
                var_20 = 0x149
                var_24 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
                ecx_7 = "result"
            else if (eax_3 != 0x20)
                var_1c = "HolodeckView"
                var_20 = 0x81c
                var_24 = "C:\x\ax2017\Engine\Editor\EditMode.cpp"
                ecx_7 = "Halt"
            else
                sub_73de00(arg1)
                sub_6f9500()
                arg1[7] -= 1
                eax_3 = sub_69f4a0(sub_69ec60(arg1), 1, arg1, 1)
                
                if (eax_3.b != 0)
                    if (*arg1 == 0)
                        sub_69f4a0(eax_3, 0, arg1, 1)
                    
                    arg1[7] += 1
                    int32_t eax_18 = sub_73e2e0(arg1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
                
                var_1c = "AssetCatalogReloadAsWritable"
                var_20 = 0x149
                var_24 = "C:\x\ax2017\Engine\AssetCatalog.cpp"
                ecx_7 = "result"
            
            sub_63b870(eax_3, &data_801800, ecx_7, var_24, var_20, var_1c)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_73de00(arg1)
    else
        data_147df8c = 2
        memset(&data_147def0, 0, 0x9c)
        int32_t xmm0_3 = data_8c4634
        data_147df0c = 0x43c80000
        data_147df10 = 0x44160000
        data_147df44 = 0x3f800000
        data_147df48 = arg1
        data_147df84 = xmm0_3
else
    data_147df8c = 2
    memset(&data_147def0, 0, 0x9c)
    int32_t xmm0_1 = data_8c4634
    data_147df0c = 0x43c80000
    data_147df10 = 0x44160000
    data_147df44 = 0x3f800000
    data_147df48 = arg1
    data_147df84 = xmm0_1
    sub_6f9500()

void* eax_4 = sub_73d5c0()
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
