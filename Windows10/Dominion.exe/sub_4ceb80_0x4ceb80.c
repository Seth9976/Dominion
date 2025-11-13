// 函数: sub_4ceb80
// 地址: 0x4ceb80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?Alloc@InternalContextBase@details@Concurrency@@UAEPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
*(sub_64e7a0(edi) + 0x18bc) = sub_4ce500
void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t eax_5 = sub_4bfcf0()

if (eax_5 u> 3)
    sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        0x296d, "StatsUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int64_t var_1c
char* var_14

switch (eax_5)
    case 0
        uint32_t eax_6 = sub_64e7a0(edi)
        sub_665db0(eax_6, &data_8dc6f8, eax_6, 0x3f800000, 0xffffffff, 0)
        int32_t ecx_5 = *(eax_4 + 0x42a0)
        int32_t edx = *(eax_4 + 0x429c)
        int32_t* eax_9 = *(edx + ((ecx_5 & 0x3fe) << 2))
        int32_t esi
        
        if (eax_9 == 0)
        label_4cec36:
            var_1c = 0
            esi = var_1c.d
        else
            while (*eax_9 != 0x3ea)
                eax_9 = eax_9[6]
                
                if (eax_9 == 0)
                    goto label_4cec36
            
            if (eax_9 == 0xfffffff8)
                goto label_4cec36
            
            esi = eax_9[4]
            var_1c:4.d = eax_9[5]
        
        int32_t* ecx_7 = *(edx + ((ecx_5 & 0x3ff) << 2))
        int32_t* eax_10 = ecx_7
        int32_t ecx_8
        int32_t edx_1
        
        if (eax_10 == 0)
        label_4cec66:
            var_1c = 0
            edx_1 = var_1c.d
            
            if (ecx_7 != 0)
                goto label_4cec78
            
        label_4cec88:
            var_1c = 0
            ecx_8 = var_1c.d
        else
            while (*eax_10 != 0x3eb)
                eax_10 = eax_10[6]
                
                if (eax_10 == 0)
                    goto label_4cec66
            
            if (eax_10 == 0xfffffff8)
                goto label_4cec66
            
            edx_1 = eax_10[4]
            var_1c:4.d = eax_10[5]
        label_4cec78:
            
            while (*ecx_7 != 0x3e9)
                ecx_7 = ecx_7[6]
                
                if (ecx_7 == 0)
                    goto label_4cec88
            
            if (ecx_7 == 0xfffffff8)
                goto label_4cec88
            
            ecx_8 = ecx_7[4]
            var_1c:4.d = ecx_7[5]
        
        int32_t var_30 = esi + edx_1
        int32_t var_34 = ecx_8
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_1 = 0
        int32_t var_40 = 0xffffffff
        sub_666380(&var_14, &data_8dc710, edi, &var_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_13 = var_14
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        int32_t ecx_12 = *(eax_4 + 0x42a0)
        int32_t edx_4 = *(eax_4 + 0x429c)
        int32_t* eax_17 = *(edx_4 + ((ecx_12 & 0x3ff) << 2))
        int32_t esi_1
        
        if (eax_17 == 0)
        label_4ced36:
            var_1c = 0
            esi_1 = var_1c.d
        else
            while (*eax_17 != 0x3ed)
                eax_17 = eax_17[6]
                
                if (eax_17 == 0)
                    goto label_4ced36
            
            if (eax_17 == 0xfffffff8)
                goto label_4ced36
            
            esi_1 = eax_17[4]
            var_1c:4.d = eax_17[5]
        
        int32_t* ecx_14 = *(edx_4 + ((ecx_12 & 0x3fe) << 2))
        int32_t* eax_18 = ecx_14
        int32_t ecx_15
        int32_t edx_5
        
        if (eax_18 == 0)
        label_4ced66:
            var_1c = 0
            edx_5 = var_1c.d
            
            if (ecx_14 != 0)
                goto label_4ced78
            
        label_4ced88:
            var_1c = 0
            ecx_15 = var_1c.d
        else
            while (*eax_18 != 0x3ee)
                eax_18 = eax_18[6]
                
                if (eax_18 == 0)
                    goto label_4ced66
            
            if (eax_18 == 0xfffffff8)
                goto label_4ced66
            
            edx_5 = eax_18[4]
            var_1c:4.d = eax_18[5]
        label_4ced78:
            
            while (*ecx_14 != 0x3ec)
                ecx_14 = ecx_14[6]
                
                if (ecx_14 == 0)
                    goto label_4ced88
            
            if (ecx_14 == 0xfffffff8)
                goto label_4ced88
            
            ecx_15 = ecx_14[4]
            var_1c:4.d = ecx_14[5]
        
        int32_t var_30_1 = edx_5 + esi_1
        int32_t var_34_1 = ecx_15
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_4 = 2
        int32_t var_40_1 = 0xffffffff
        sub_666380(&var_14, &data_8dc71c, edi, &var_14)
        int32_t var_8_5 = 3
        
        if (data_cf65bc != 0)
            char* eax_21 = var_14
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_63d4e0(&var_14)
                int32_t temp10_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        int32_t* ecx_21 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_24 = ecx_21
        int32_t ecx_22
        int32_t edx_8
        int32_t esi_2
        int32_t* eax_25
        
        if (eax_24 == 0)
        label_4cee36:
            eax_25 = ecx_21
            var_1c = 0
            esi_2 = var_1c.d
            
            if (eax_25 != 0)
                goto label_4cee4a
            
        label_4cee5a:
            var_1c = 0
            edx_8 = var_1c.d
            
            if (ecx_21 != 0)
                goto label_4cee76
            
        label_4cee86:
            var_1c = 0
            ecx_22 = var_1c.d
        else
            while (*eax_24 != 0x3f0)
                eax_24 = eax_24[6]
                
                if (eax_24 == 0)
                    goto label_4cee36
            
            if (eax_24 == 0xfffffff8)
                goto label_4cee36
            
            esi_2 = eax_24[4]
            var_1c:4.d = eax_24[5]
            eax_25 = ecx_21
        label_4cee4a:
            
            while (*eax_25 != 0x3f1)
                eax_25 = eax_25[6]
                
                if (eax_25 == 0)
                    goto label_4cee5a
            
            if (eax_25 == 0xfffffff8)
                goto label_4cee5a
            
            edx_8 = eax_25[4]
            var_1c:4.d = eax_25[5]
        label_4cee76:
            
            while (*ecx_21 != 0x3ef)
                ecx_21 = ecx_21[6]
                
                if (ecx_21 == 0)
                    goto label_4cee86
            
            if (ecx_21 == 0xfffffff8)
                goto label_4cee86
            
            ecx_22 = ecx_21[4]
            var_1c:4.d = ecx_21[5]
        int32_t var_30_2 = edx_8 + esi_2
        int32_t var_34_2 = ecx_22
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_7 = 4
        int32_t var_40_2 = 0xffffffff
        sub_666380(&var_14, &data_8dc728, edi, &var_14)
        int32_t var_8_8 = 5
        
        if (data_cf65bc != 0)
            char* eax_28 = var_14
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_63d4e0(&var_14)
                int32_t temp16_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp16_1 == 1)
                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
        
        int32_t var_8_9 = 0xffffffff
        int32_t* ecx_28 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_31 = ecx_28
        int32_t ecx_29
        int32_t edx_11
        int32_t esi_3
        int32_t* eax_32
        
        if (eax_31 == 0)
        label_4cef36:
            eax_32 = ecx_28
            var_1c = 0
            esi_3 = var_1c.d
            
            if (eax_32 != 0)
                goto label_4cef4a
            
        label_4cef5a:
            var_1c = 0
            edx_11 = var_1c.d
            
            if (ecx_28 != 0)
                goto label_4cef76
            
        label_4cef86:
            var_1c = 0
            ecx_29 = var_1c.d
        else
            while (*eax_31 != 0x3f3)
                eax_31 = eax_31[6]
                
                if (eax_31 == 0)
                    goto label_4cef36
            
            if (eax_31 == 0xfffffff8)
                goto label_4cef36
            
            esi_3 = eax_31[4]
            var_1c:4.d = eax_31[5]
            eax_32 = ecx_28
        label_4cef4a:
            
            while (*eax_32 != 0x3f4)
                eax_32 = eax_32[6]
                
                if (eax_32 == 0)
                    goto label_4cef5a
            
            if (eax_32 == 0xfffffff8)
                goto label_4cef5a
            
            edx_11 = eax_32[4]
            var_1c:4.d = eax_32[5]
        label_4cef76:
            
            while (*ecx_28 != 0x3f2)
                ecx_28 = ecx_28[6]
                
                if (ecx_28 == 0)
                    goto label_4cef86
            
            if (ecx_28 == 0xfffffff8)
                goto label_4cef86
            
            ecx_29 = ecx_28[4]
            var_1c:4.d = ecx_28[5]
        int32_t var_30_3 = esi_3 + edx_11
        int32_t var_34_3 = ecx_29
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_10 = 6
        int32_t var_40_3 = 0xffffffff
        sub_666380(&var_14, &data_8dc734, edi, &var_14)
        int32_t var_8_11 = 7
        
        if (data_cf65bc != 0)
            char* eax_35 = var_14
            
            if (eax_35 != 0 && *eax_35 != 0)
                char* eax_36 = sub_63d4e0(&var_14)
                int32_t temp22_1 = *(eax_36 + 4)
                *(eax_36 + 4) -= 1
                
                if (temp22_1 == 1)
                    sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
        
        int32_t var_8_12 = 0xffffffff
        int32_t* ecx_35 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_38 = ecx_35
        int32_t ecx_36
        int32_t edx_14
        int32_t esi_4
        int32_t* eax_39
        
        if (eax_38 == 0)
        label_4cf036:
            eax_39 = ecx_35
            var_1c = 0
            esi_4 = var_1c.d
            
            if (eax_39 != 0)
                goto label_4cf04a
            
        label_4cf05a:
            var_1c = 0
            edx_14 = var_1c.d
            
            if (ecx_35 != 0)
                goto label_4cf076
            
        label_4cf086:
            var_1c = 0
            ecx_36 = var_1c.d
        else
            while (*eax_38 != 0x3f6)
                eax_38 = eax_38[6]
                
                if (eax_38 == 0)
                    goto label_4cf036
            
            if (eax_38 == 0xfffffff8)
                goto label_4cf036
            
            esi_4 = eax_38[4]
            var_1c:4.d = eax_38[5]
            eax_39 = ecx_35
        label_4cf04a:
            
            while (*eax_39 != 0x3f7)
                eax_39 = eax_39[6]
                
                if (eax_39 == 0)
                    goto label_4cf05a
            
            if (eax_39 == 0xfffffff8)
                goto label_4cf05a
            
            edx_14 = eax_39[4]
            var_1c:4.d = eax_39[5]
        label_4cf076:
            
            while (*ecx_35 != 0x3f5)
                ecx_35 = ecx_35[6]
                
                if (ecx_35 == 0)
                    goto label_4cf086
            
            if (ecx_35 == 0xfffffff8)
                goto label_4cf086
            
            ecx_36 = ecx_35[4]
            var_1c:4.d = ecx_35[5]
        int32_t var_30_4 = esi_4 + edx_14
        int32_t var_34_4 = ecx_36
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_13 = 8
        int32_t var_40_4 = 0xffffffff
        sub_666380(&var_14, &data_8dc740, edi, &var_14)
        int32_t var_8_14 = 9
        
        if (data_cf65bc != 0)
            char* eax_42 = var_14
            
            if (eax_42 != 0 && *eax_42 != 0)
                char* eax_43 = sub_63d4e0(&var_14)
                int32_t temp28_1 = *(eax_43 + 4)
                *(eax_43 + 4) -= 1
                
                if (temp28_1 == 1)
                    sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
        
        int32_t var_8_15 = 0xffffffff
        int32_t* ecx_42 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_45 = ecx_42
        int32_t ecx_43
        int32_t edx_17
        int32_t esi_5
        int32_t* eax_46
        
        if (eax_45 == 0)
        label_4cf136:
            eax_46 = ecx_42
            var_1c = 0
            esi_5 = var_1c.d
            
            if (eax_46 != 0)
                goto label_4cf14a
            
        label_4cf15a:
            var_1c = 0
            edx_17 = var_1c.d
            
            if (ecx_42 != 0)
                goto label_4cf176
            
        label_4cf186:
            var_1c = 0
            ecx_43 = var_1c.d
        else
            while (*eax_45 != 0x3f9)
                eax_45 = eax_45[6]
                
                if (eax_45 == 0)
                    goto label_4cf136
            
            if (eax_45 == 0xfffffff8)
                goto label_4cf136
            
            esi_5 = eax_45[4]
            var_1c:4.d = eax_45[5]
            eax_46 = ecx_42
        label_4cf14a:
            
            while (*eax_46 != 0x3fa)
                eax_46 = eax_46[6]
                
                if (eax_46 == 0)
                    goto label_4cf15a
            
            if (eax_46 == 0xfffffff8)
                goto label_4cf15a
            
            edx_17 = eax_46[4]
            var_1c:4.d = eax_46[5]
        label_4cf176:
            
            while (*ecx_42 != 0x3f8)
                ecx_42 = ecx_42[6]
                
                if (ecx_42 == 0)
                    goto label_4cf186
            
            if (ecx_42 == 0xfffffff8)
                goto label_4cf186
            
            ecx_43 = ecx_42[4]
            var_1c:4.d = ecx_42[5]
        int32_t var_30_5 = esi_5 + edx_17
        int32_t var_34_5 = ecx_43
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_16 = 0xa
        int32_t var_40_5 = 0xffffffff
        sub_666380(&var_14, &data_8dc74c, edi, &var_14)
        int32_t var_8_17 = 0xb
        
        if (data_cf65bc != 0)
            char* eax_49 = var_14
            
            if (eax_49 != 0 && *eax_49 != 0)
                char* eax_50 = sub_63d4e0(&var_14)
                int32_t temp32_1 = *(eax_50 + 4)
                *(eax_50 + 4) -= 1
                
                if (temp32_1 == 1)
                    sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
        
        int32_t var_8_18 = 0xffffffff
        int32_t* ecx_49 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_52 = ecx_49
        int32_t ecx_50
        int32_t edx_20
        int32_t esi_6
        int32_t* eax_53
        
        if (eax_52 == 0)
        label_4cf236:
            eax_53 = ecx_49
            var_1c = 0
            esi_6 = var_1c.d
            
            if (eax_53 != 0)
                goto label_4cf24a
            
        label_4cf25a:
            var_1c = 0
            edx_20 = var_1c.d
            
            if (ecx_49 != 0)
                goto label_4cf276
            
        label_4cf286:
            var_1c = 0
            ecx_50 = var_1c.d
        else
            while (*eax_52 != 0x3fc)
                eax_52 = eax_52[6]
                
                if (eax_52 == 0)
                    goto label_4cf236
            
            if (eax_52 == 0xfffffff8)
                goto label_4cf236
            
            esi_6 = eax_52[4]
            var_1c:4.d = eax_52[5]
            eax_53 = ecx_49
        label_4cf24a:
            
            while (*eax_53 != 0x3fd)
                eax_53 = eax_53[6]
                
                if (eax_53 == 0)
                    goto label_4cf25a
            
            if (eax_53 == 0xfffffff8)
                goto label_4cf25a
            
            edx_20 = eax_53[4]
            var_1c:4.d = eax_53[5]
        label_4cf276:
            
            while (*ecx_49 != 0x3fb)
                ecx_49 = ecx_49[6]
                
                if (ecx_49 == 0)
                    goto label_4cf286
            
            if (ecx_49 == 0xfffffff8)
                goto label_4cf286
            
            ecx_50 = ecx_49[4]
            var_1c:4.d = ecx_49[5]
        int32_t var_30_6 = edx_20 + esi_6
        int32_t var_34_6 = ecx_50
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_19 = 0xc
        int32_t var_40_6 = 0xffffffff
        sub_666380(&var_14, &data_8dc758, edi, &var_14)
        int32_t var_8_20 = 0xd
        
        if (data_cf65bc != 0)
            char* eax_56 = var_14
            
            if (eax_56 != 0 && *eax_56 != 0)
                char* eax_57 = sub_63d4e0(&var_14)
                int32_t temp36_1 = *(eax_57 + 4)
                *(eax_57 + 4) -= 1
                
                if (temp36_1 == 1)
                    sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
        
        int32_t var_8_21 = 0xffffffff
        int32_t edx_23 = *(eax_4 + 0x42a0)
        int32_t esi_7 = *(eax_4 + 0x429c)
        int32_t* ecx_54 = *(esi_7 + ((edx_23 & 0x3ff) << 2))
        int32_t* eax_60 = ecx_54
        int32_t edi_1
        
        if (eax_60 == 0)
        label_4cf336:
            var_1c = 0
            edi_1 = var_1c.d
        else
            while (*eax_60 != 0x3ff)
                eax_60 = eax_60[6]
                
                if (eax_60 == 0)
                    goto label_4cf336
            
            if (eax_60 == 0xfffffff8)
                goto label_4cf336
            
            edi_1 = eax_60[4]
            var_1c:4.d = eax_60[5]
        
        int32_t* eax_61 = *(esi_7 + ((edx_23 & 0x440) << 2))
        int32_t edx_25
        
        if (eax_61 == 0)
        label_4cf366:
            var_1c = 0
            edx_25 = var_1c.d
        else
            while (*eax_61 != 0x400)
                eax_61 = eax_61[6]
                
                if (eax_61 == 0)
                    goto label_4cf366
            
            if (eax_61 == 0xfffffff8)
                goto label_4cf366
            
            edx_25 = eax_61[4]
            var_1c:4.d = eax_61[5]
        
        int32_t ecx_55
        
        if (ecx_54 == 0)
        label_4cf388:
            var_1c = 0
            ecx_55 = var_1c.d
        else
            while (*ecx_54 != 0x3fe)
                ecx_54 = ecx_54[6]
                
                if (ecx_54 == 0)
                    goto label_4cf388
            
            if (ecx_54 == 0xfffffff8)
                goto label_4cf388
            
            ecx_55 = ecx_54[4]
            var_1c:4.d = ecx_54[5]
        
        int32_t var_30_7 = edi_1 + edx_25
        int32_t var_34_7 = ecx_55
        sub_63df30(&var_14, "%d-%d")
        int32_t var_40_7 = 0xffffffff
        int32_t var_8_22 = 0xe
        sub_666380(&var_14, &data_8dc764, arg1, &var_14)
        int32_t var_8_23 = 0xf
        
        if (data_cf65bc != 0)
            char* eax_64 = var_14
            
            if (eax_64 != 0 && *eax_64 != 0)
                char* eax_65 = sub_63d4e0(&var_14)
                int32_t temp39_1 = *(eax_65 + 4)
                *(eax_65 + 4) -= 1
                
                if (temp39_1 == 1)
                    sub_64c080(eax_65, *(eax_65 + 0xc) + 0x10)
        
        int32_t var_8_24 = 0xffffffff
        int32_t ecx_59 = *(eax_4 + 0x42a0)
        int32_t edx_28 = *(eax_4 + 0x429c)
        int32_t* eax_68 = *(edx_28 + ((ecx_59 & 0x442) << 2))
        int32_t edi_2
        
        if (eax_68 == 0)
        label_4cf436:
            var_1c = 0
            edi_2 = var_1c.d
        else
            while (*eax_68 != 0x402)
                eax_68 = eax_68[6]
                
                if (eax_68 == 0)
                    goto label_4cf436
            
            if (eax_68 == 0xfffffff8)
                goto label_4cf436
            
            edi_2 = eax_68[4]
            var_1c:4.d = eax_68[5]
        
        int32_t* eax_71 = *(edx_28 + ((ecx_59 & 0x443) << 2))
        int32_t esi_8
        
        if (eax_71 == 0)
        label_4cf466:
            var_1c = 0
            esi_8 = var_1c.d
        else
            while (*eax_71 != 0x403)
                eax_71 = eax_71[6]
                
                if (eax_71 == 0)
                    goto label_4cf466
            
            if (eax_71 == 0xfffffff8)
                goto label_4cf466
            
            esi_8 = eax_71[4]
            var_1c:4.d = eax_71[5]
        
        int32_t* eax_72 = *(edx_28 + ((ecx_59 & 0x441) << 2))
        int32_t ecx_61
        
        if (eax_72 == 0)
        label_4cf496:
            var_1c = 0
            ecx_61 = var_1c.d
        else
            while (*eax_72 != 0x401)
                eax_72 = eax_72[6]
                
                if (eax_72 == 0)
                    goto label_4cf496
            
            if (eax_72 == 0xfffffff8)
                goto label_4cf496
            
            ecx_61 = eax_72[4]
            var_1c:4.d = eax_72[5]
        
        int32_t var_30_8 = esi_8 + edi_2
        int32_t var_34_8 = ecx_61
        sub_63df30(&var_14, "%d-%d")
        int32_t var_40_8 = 0xffffffff
        int32_t var_8_25 = 0x10
        sub_666380(&var_14, &data_8dc770, arg1, &var_14)
        int32_t var_8_26 = 0x11
        
        if (data_cf65bc != 0)
            char* eax_75 = var_14
            
            if (eax_75 != 0 && *eax_75 != 0)
                char* eax_76 = sub_63d4e0(&var_14)
                int32_t temp43_1 = *(eax_76 + 4)
                *(eax_76 + 4) -= 1
                
                if (temp43_1 == 1)
                    sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
        
        int32_t var_8_27 = 0xffffffff
        int32_t ecx_65 = *(eax_4 + 0x42a0)
        int32_t edx_31 = *(eax_4 + 0x429c)
        int32_t* eax_79 = *(edx_31 + ((ecx_65 & 0x445) << 2))
        int32_t edi_3
        
        if (eax_79 == 0)
        label_4cf546:
            var_1c = 0
            edi_3 = var_1c.d
        else
            while (*eax_79 != 0x405)
                eax_79 = eax_79[6]
                
                if (eax_79 == 0)
                    goto label_4cf546
            
            if (eax_79 == 0xfffffff8)
                goto label_4cf546
            
            edi_3 = eax_79[4]
            var_1c:4.d = eax_79[5]
        
        int32_t* eax_82 = *(edx_31 + ((ecx_65 & 0x446) << 2))
        int32_t esi_9
        
        if (eax_82 == 0)
        label_4cf576:
            var_1c = 0
            esi_9 = var_1c.d
        else
            while (*eax_82 != 0x406)
                eax_82 = eax_82[6]
                
                if (eax_82 == 0)
                    goto label_4cf576
            
            if (eax_82 == 0xfffffff8)
                goto label_4cf576
            
            esi_9 = eax_82[4]
            var_1c:4.d = eax_82[5]
        
        int32_t* eax_83 = *(edx_31 + ((ecx_65 & 0x444) << 2))
        int32_t ecx_67
        
        if (eax_83 == 0)
        label_4cf5a6:
            var_1c = 0
            ecx_67 = var_1c.d
        else
            while (*eax_83 != 0x404)
                eax_83 = eax_83[6]
                
                if (eax_83 == 0)
                    goto label_4cf5a6
            
            if (eax_83 == 0xfffffff8)
                goto label_4cf5a6
            
            ecx_67 = eax_83[4]
            var_1c:4.d = eax_83[5]
        
        int32_t var_30_9 = edi_3 + esi_9
        int32_t var_34_9 = ecx_67
        sub_63df30(&var_14, "%d-%d")
        edi = arg1
        int32_t var_40_9 = 0xffffffff
        int32_t var_8_28 = 0x12
        sub_666380(&var_14, &data_8dc77c, edi, &var_14)
        int32_t var_8_29 = 0x13
    case 1, 2, 3
        uint32_t eax_146 = sub_64e7a0(edi)
        sub_665db0(eax_146, &data_8dc704, eax_146, 0x3f800000, 0xffffffff, 0)
        int32_t ecx_71 = *(eax_4 + 0x42a0)
        int32_t edx_32 = *(eax_4 + 0x429c)
        int32_t* eax_149 = *(edx_32 + ((ecx_71 & 0x3fe) << 2))
        int32_t esi_10
        
        if (eax_149 == 0)
        label_4cf90a:
            var_1c = 0
            esi_10 = var_1c.d
        else
            while (*eax_149 != 0x3ea)
                eax_149 = eax_149[6]
                
                if (eax_149 == 0)
                    goto label_4cf90a
            
            if (eax_149 == 0xfffffff8)
                goto label_4cf90a
            
            esi_10 = eax_149[4]
            var_1c:4.d = eax_149[5]
        
        int32_t* ecx_73 = *(edx_32 + ((ecx_71 & 0x3ff) << 2))
        int32_t* eax_150 = ecx_73
        int32_t ecx_74
        int32_t edx_33
        
        if (eax_150 == 0)
        label_4cf937:
            var_1c = 0
            edx_33 = var_1c.d
            
            if (ecx_73 != 0)
                goto label_4cf949
            
        label_4cf959:
            var_1c = 0
            ecx_74 = var_1c.d
        else
            while (*eax_150 != 0x3eb)
                eax_150 = eax_150[6]
                
                if (eax_150 == 0)
                    goto label_4cf937
            
            if (eax_150 == 0xfffffff8)
                goto label_4cf937
            
            edx_33 = eax_150[4]
            var_1c:4.d = eax_150[5]
        label_4cf949:
            
            while (*ecx_73 != 0x3e9)
                ecx_73 = ecx_73[6]
                
                if (ecx_73 == 0)
                    goto label_4cf959
            
            if (ecx_73 == 0xfffffff8)
                goto label_4cf959
            
            ecx_74 = ecx_73[4]
            var_1c:4.d = ecx_73[5]
        
        int32_t var_30_10 = edx_33 + esi_10
        int32_t var_34_10 = ecx_74
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_30 = 0x14
        int32_t var_40_10 = 0xffffffff
        sub_666380(&var_14, &data_8dc710, edi, &var_14)
        int32_t var_8_31 = 0x15
        
        if (data_cf65bc != 0)
            char* eax_153 = var_14
            
            if (eax_153 != 0 && *eax_153 != 0)
                char* eax_154 = sub_63d4e0(&var_14)
                int32_t temp5_1 = *(eax_154 + 4)
                *(eax_154 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_154, *(eax_154 + 0xc) + 0x10)
        
        int32_t var_8_32 = 0xffffffff
        int32_t ecx_78 = *(eax_4 + 0x42a0)
        int32_t edx_36 = *(eax_4 + 0x429c)
        int32_t* eax_157 = *(edx_36 + ((ecx_78 & 0x3ff) << 2))
        int32_t esi_11
        
        if (eax_157 == 0)
        label_4cfa06:
            var_1c = 0
            esi_11 = var_1c.d
        else
            while (*eax_157 != 0x3ed)
                eax_157 = eax_157[6]
                
                if (eax_157 == 0)
                    goto label_4cfa06
            
            if (eax_157 == 0xfffffff8)
                goto label_4cfa06
            
            esi_11 = eax_157[4]
            var_1c:4.d = eax_157[5]
        
        int32_t* ecx_80 = *(edx_36 + ((ecx_78 & 0x3fe) << 2))
        int32_t* eax_158 = ecx_80
        int32_t ecx_81
        int32_t edx_37
        
        if (eax_158 == 0)
        label_4cfa36:
            var_1c = 0
            edx_37 = var_1c.d
            
            if (ecx_80 != 0)
                goto label_4cfa48
            
        label_4cfa58:
            var_1c = 0
            ecx_81 = var_1c.d
        else
            while (*eax_158 != 0x3ee)
                eax_158 = eax_158[6]
                
                if (eax_158 == 0)
                    goto label_4cfa36
            
            if (eax_158 == 0xfffffff8)
                goto label_4cfa36
            
            edx_37 = eax_158[4]
            var_1c:4.d = eax_158[5]
        label_4cfa48:
            
            while (*ecx_80 != 0x3ec)
                ecx_80 = ecx_80[6]
                
                if (ecx_80 == 0)
                    goto label_4cfa58
            
            if (ecx_80 == 0xfffffff8)
                goto label_4cfa58
            
            ecx_81 = ecx_80[4]
            var_1c:4.d = ecx_80[5]
        
        int32_t var_30_11 = esi_11 + edx_37
        int32_t var_34_11 = ecx_81
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_33 = 0x16
        int32_t var_40_11 = 0xffffffff
        sub_666380(&var_14, &data_8dc71c, edi, &var_14)
        int32_t var_8_34 = 0x17
        
        if (data_cf65bc != 0)
            char* eax_161 = var_14
            
            if (eax_161 != 0 && *eax_161 != 0)
                char* eax_162 = sub_63d4e0(&var_14)
                int32_t temp11_1 = *(eax_162 + 4)
                *(eax_162 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_162, *(eax_162 + 0xc) + 0x10)
        
        int32_t var_8_35 = 0xffffffff
        int32_t* ecx_87 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_164 = ecx_87
        int32_t ecx_88
        int32_t edx_40
        int32_t esi_12
        int32_t* eax_165
        
        if (eax_164 == 0)
        label_4cfb06:
            eax_165 = ecx_87
            var_1c = 0
            esi_12 = var_1c.d
            
            if (eax_165 != 0)
                goto label_4cfb1a
            
        label_4cfb2a:
            var_1c = 0
            edx_40 = var_1c.d
            
            if (ecx_87 != 0)
                goto label_4cfb46
            
        label_4cfb56:
            var_1c = 0
            ecx_88 = var_1c.d
        else
            while (*eax_164 != 0x3f0)
                eax_164 = eax_164[6]
                
                if (eax_164 == 0)
                    goto label_4cfb06
            
            if (eax_164 == 0xfffffff8)
                goto label_4cfb06
            
            esi_12 = eax_164[4]
            var_1c:4.d = eax_164[5]
            eax_165 = ecx_87
        label_4cfb1a:
            
            while (*eax_165 != 0x3f1)
                eax_165 = eax_165[6]
                
                if (eax_165 == 0)
                    goto label_4cfb2a
            
            if (eax_165 == 0xfffffff8)
                goto label_4cfb2a
            
            edx_40 = eax_165[4]
            var_1c:4.d = eax_165[5]
        label_4cfb46:
            
            while (*ecx_87 != 0x3ef)
                ecx_87 = ecx_87[6]
                
                if (ecx_87 == 0)
                    goto label_4cfb56
            
            if (ecx_87 == 0xfffffff8)
                goto label_4cfb56
            
            ecx_88 = ecx_87[4]
            var_1c:4.d = ecx_87[5]
        int32_t var_30_12 = esi_12 + edx_40
        int32_t var_34_12 = ecx_88
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_36 = 0x18
        int32_t var_40_12 = 0xffffffff
        sub_666380(&var_14, &data_8dc728, edi, &var_14)
        int32_t var_8_37 = 0x19
        
        if (data_cf65bc != 0)
            char* eax_168 = var_14
            
            if (eax_168 != 0 && *eax_168 != 0)
                char* eax_169 = sub_63d4e0(&var_14)
                int32_t temp17_1 = *(eax_169 + 4)
                *(eax_169 + 4) -= 1
                
                if (temp17_1 == 1)
                    sub_64c080(eax_169, *(eax_169 + 0xc) + 0x10)
        
        int32_t var_8_38 = 0xffffffff
        int32_t* ecx_94 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_171 = ecx_94
        int32_t ecx_95
        int32_t edx_43
        int32_t esi_13
        int32_t* eax_172
        
        if (eax_171 == 0)
        label_4cfc06:
            eax_172 = ecx_94
            var_1c = 0
            esi_13 = var_1c.d
            
            if (eax_172 != 0)
                goto label_4cfc26
            
        label_4cfc36:
            var_1c = 0
            edx_43 = var_1c.d
            
            if (ecx_94 != 0)
                goto label_4cfc56
            
        label_4cfc66:
            var_1c = 0
            ecx_95 = var_1c.d
        else
            while (*eax_171 != 0x3f3)
                eax_171 = eax_171[6]
                
                if (eax_171 == 0)
                    goto label_4cfc06
            
            if (eax_171 == 0xfffffff8)
                goto label_4cfc06
            
            esi_13 = eax_171[4]
            var_1c:4.d = eax_171[5]
            eax_172 = ecx_94
        label_4cfc26:
            
            while (*eax_172 != 0x3f4)
                eax_172 = eax_172[6]
                
                if (eax_172 == 0)
                    goto label_4cfc36
            
            if (eax_172 == 0xfffffff8)
                goto label_4cfc36
            
            edx_43 = eax_172[4]
            var_1c:4.d = eax_172[5]
        label_4cfc56:
            
            while (*ecx_94 != 0x3f2)
                ecx_94 = ecx_94[6]
                
                if (ecx_94 == 0)
                    goto label_4cfc66
            
            if (ecx_94 == 0xfffffff8)
                goto label_4cfc66
            
            ecx_95 = ecx_94[4]
            var_1c:4.d = ecx_94[5]
        int32_t var_30_13 = esi_13 + edx_43
        int32_t var_34_13 = ecx_95
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_39 = 0x1a
        int32_t var_40_13 = 0xffffffff
        sub_666380(&var_14, &data_8dc734, edi, &var_14)
        int32_t var_8_40 = 0x1b
        
        if (data_cf65bc != 0)
            char* eax_175 = var_14
            
            if (eax_175 != 0 && *eax_175 != 0)
                char* eax_176 = sub_63d4e0(&var_14)
                int32_t temp23_1 = *(eax_176 + 4)
                *(eax_176 + 4) -= 1
                
                if (temp23_1 == 1)
                    sub_64c080(eax_176, *(eax_176 + 0xc) + 0x10)
        
        int32_t var_8_41 = 0xffffffff
        int32_t* ecx_101 = *(*(eax_4 + 0x429c) + ((*(eax_4 + 0x42a0) & 0x3ff) << 2))
        int32_t* eax_178 = ecx_101
        int32_t ecx_102
        int32_t edx_46
        int32_t esi_14
        int32_t* eax_179
        
        if (eax_178 == 0)
        label_4cfd26:
            eax_179 = ecx_101
            var_1c = 0
            esi_14 = var_1c.d
            
            if (eax_179 != 0)
                goto label_4cfd46
            
        label_4cfd56:
            var_1c = 0
            edx_46 = var_1c.d
            
            if (ecx_101 != 0)
                goto label_4cfd76
            
        label_4cfd86:
            var_1c = 0
            ecx_102 = var_1c.d
        else
            while (*eax_178 != 0x3f6)
                eax_178 = eax_178[6]
                
                if (eax_178 == 0)
                    goto label_4cfd26
            
            if (eax_178 == 0xfffffff8)
                goto label_4cfd26
            
            esi_14 = eax_178[4]
            var_1c:4.d = eax_178[5]
            eax_179 = ecx_101
        label_4cfd46:
            
            while (*eax_179 != 0x3f7)
                eax_179 = eax_179[6]
                
                if (eax_179 == 0)
                    goto label_4cfd56
            
            if (eax_179 == 0xfffffff8)
                goto label_4cfd56
            
            edx_46 = eax_179[4]
            var_1c:4.d = eax_179[5]
        label_4cfd76:
            
            while (*ecx_101 != 0x3f5)
                ecx_101 = ecx_101[6]
                
                if (ecx_101 == 0)
                    goto label_4cfd86
            
            if (ecx_101 == 0xfffffff8)
                goto label_4cfd86
            
            ecx_102 = ecx_101[4]
            var_1c:4.d = ecx_101[5]
        int32_t var_30_14 = esi_14 + edx_46
        int32_t var_34_14 = ecx_102
        sub_63df30(&var_14, "%d-%d")
        int32_t var_8_42 = 0x1c
        int32_t var_40_14 = 0xffffffff
        sub_666380(&var_14, &data_8dc740, edi, &var_14)
        int32_t var_8_43 = 0x1d

if (data_cf65bc != 0)
    char* eax_182 = var_14
    
    if (eax_182 != 0 && *eax_182 != 0)
        char* eax_183 = sub_63d4e0(&var_14)
        int32_t temp31_1 = *(eax_183 + 4)
        *(eax_183 + 4) -= 1
        
        if (temp31_1 == 1)
            sub_64c080(eax_183, *(eax_183 + 0xc) + 0x10)

int32_t var_8_44 = 0xffffffff

if (*(eax_4 + 0x7854) == 0)
    uint32_t eax_217 = sub_64e7a0(edi)
    void* eax_218 = sub_665db0(eax_217, &data_8dc788, eax_217, 0x3f800000, 0xffffffff, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_218

float xmm1 = *(eax_4 + 0x785c)
float xmm0_5 = sub_4d5cb0(((*(eax_4 + 0x7858) - (xmm1 + xmm1)) * 7.5f + 50f) * 100f)
float xmm0_6

if (0 f<= xmm0_5)
    xmm0_6 = xmm0_5 + 0.5f
else
    xmm0_6 = xmm0_5 - 0.5f

int32_t var_30_15 = int.d(xmm0_6)
sub_63df30(&var_1c:4, "%d")
int32_t var_8_45 = 0x1e
int32_t var_3c_15 = 0xffffffff
int32_t* eax_216 = sub_666380(&var_1c:4, &data_8dc794, edi, &var_1c:4)
int32_t var_8_46 = 0x1f

if (data_cf65bc != 0)
    eax_216 = var_1c:4.d
    
    if (eax_216 != 0 && *eax_216 != 0)
        eax_216 = sub_63d4e0(&var_1c:4)
        int32_t temp33_1 = eax_216[1]
        eax_216[1] -= 1
        
        if (temp33_1 == 1)
            eax_216 = sub_64c080(eax_216, eax_216[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_216
