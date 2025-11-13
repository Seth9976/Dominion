// 函数: sub_4b03f0
// 地址: 0x4b03f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Sweep@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEXP6A_NPAV_UnrealizedChore@23@PAX@Z12@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void* eax_4 = sub_68caf0(&ExceptionList, nullptr, "dom_ui_player_ai_name", 0)
char const* const var_18

if (eax_4 != 0)
    eax_4 = *eax_4
    char* edx = &data_801800
    
    if (eax_4 != 0)
        edx = eax_4
    
    var_18 = edx
else
    var_18 = "dom_ui_player_ai_name"

void* edi = arg4
int32_t var_38
char const* const var_34
char* ecx

if (*(edi + 0x14) == 3)
    eax_4 = *(edi + 0x18)
    
    if (eax_4 u<= 3)
        void* ebx
        
        switch (eax_4)
            case nullptr
                ebx = "dom_ui_player_easy"
            case 1
                ebx = "dom_ui_player_medium"
            case 2
                ebx = "dom_ui_player_hard"
            case 3
                ebx = "dom_ui_player_very_easy"
        
        void* eax_5 = sub_68caf0(eax_4, nullptr, ebx, 0)
        
        if (eax_5 != 0)
            eax_5 = *eax_5
            ebx = &data_801800
            
            if (eax_5 != 0)
                ebx = eax_5
        
        char* var_14
        sub_63dfa0(eax_5, var_18, &var_14, "[level]", ebx)
        int32_t var_8_1 = 1
        void* ecx_6 = nullptr
        int32_t ebx_3 = (arg4 - arg2 - 0x40) s/ 0x22c
        int32_t edx_4 = 0
        
        if (*(arg2 + 0x54) == 3 && *(arg2 + 0x58) == *(edi + 0x18))
            edx_4 = 1
            ecx_6.b = ebx_3 s> 0
        
        arg4 = ecx_6
        
        if (*(arg2 + 0x280) == 3 && *(arg2 + 0x284) == *(edi + 0x18))
            void* eax_9 = ecx_6
            edx_4 += 1
            ecx_6 = eax_9 + 1
            
            if (ebx_3 s<= 1)
                ecx_6 = eax_9
        
        arg4 = ecx_6
        
        if (*(arg2 + 0x4ac) == 3 && *(arg2 + 0x4b0) == *(edi + 0x18))
            void* eax_11 = ecx_6
            edx_4 += 1
            ecx_6 = eax_11 + 1
            
            if (ebx_3 s<= 2)
                ecx_6 = eax_11
        
        arg4 = ecx_6
        
        if (*(arg2 + 0x6d8) == 3 && *(arg2 + 0x6dc) == *(edi + 0x18))
            void* eax_13 = ecx_6
            edx_4 += 1
            ecx_6 = eax_13 + 1
            
            if (ebx_3 s<= 3)
                ecx_6 = eax_13
        
        arg4 = ecx_6
        
        if (*(arg2 + 0x904) == 3 && *(arg2 + 0x908) == *(edi + 0x18))
            void* eax_15 = ecx_6
            edx_4 += 1
            ecx_6 = eax_15 + 1
            
            if (ebx_3 s<= 4)
                ecx_6 = eax_15
        
        arg4 = ecx_6
        
        if (*(arg2 + 0xb30) == 3 && *(arg2 + 0xb34) == *(edi + 0x18))
            void* eax_17 = ecx_6
            edx_4 += 1
            ecx_6 = eax_17 + 1
            
            if (ebx_3 s<= 5)
                ecx_6 = eax_17
        
        arg4 = ecx_6
        
        if (*(arg2 + 0xd5c) == 3 && *(arg2 + 0xd60) == *(edi + 0x18))
            void* eax_19 = ecx_6
            edx_4 += 1
            ecx_6 = eax_19 + 1
            
            if (ebx_3 s<= 6)
                ecx_6 = eax_19
        
        arg4 = ecx_6
        
        if (*(arg2 + 0xf88) == 3 && *(arg2 + 0xf8c) == *(edi + 0x18))
            void* eax_21 = ecx_6
            edx_4 += 1
            ecx_6 = eax_21 + 1
            
            if (ebx_3 s<= 7)
                ecx_6 = eax_21
        
        void* ecx_7 = nullptr
        char* const edx_5 = &data_801800
        
        if (edx_4 s> 1)
            ecx_7 = ecx_6 + 1
        
        char* eax_23 = var_14
        void* var_34_2 = ecx_7
        
        if (eax_23 != 0)
            edx_5 = eax_23
        
        sub_4b02f0(arg3, edx_5)
        int32_t var_20_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            char* eax_24 = var_14
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_25 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    var_34 = "GetAILevelKey"
    ecx = "Halt"
    var_38 = 0x4c0
else
    var_34 = "GetAIName"
    ecx = "player.playerType == DBGAMEPLAYERTYPE_AI"
    var_38 = 0x4c8

sub_63b870(eax_4, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", var_38, 
    var_34)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
