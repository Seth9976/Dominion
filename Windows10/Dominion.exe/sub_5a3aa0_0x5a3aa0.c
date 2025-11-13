// 函数: sub_5a3aa0
// 地址: 0x5a3aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1?$_SyncOriginator@W4agent_status@Concurrency@@@details@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_cc8dc0
int32_t edi = data_171efc4
int32_t var_1c = 0x800
int32_t var_18 = 0x400

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax_3 + 0x3c) != 1)
    edi = sub_5aa940(arg3 + 0x21b0f8, arg3 + 0x5110, arg3 + 0x5028, arg3 + 0x21b0f8, &var_1c)

void* esi = *fsbase->ThreadLocalStoragePointer

if (data_1a8a080 s> *(esi + 8))
    sub_75970e(&data_1a8a080)
    
    if (data_1a8a080 == 0xffffffff)
        int32_t var_8_1 = 2
        data_1a8a084 = sub_69f030("xbin/atlases/res/atlas-campaign-0.texture", 3)
        int32_t var_8_2 = 0xffffffff
        __Init_thread_footer(&data_1a8a080)

sub_69ec60(data_1a8a084)

if (data_1a8a088 s> *(esi + 8))
    sub_75970e(&data_1a8a088)
    
    if (data_1a8a088 == 0xffffffff)
        int32_t var_8_3 = 3
        data_1a8a08c = sub_69f030("xbin/atlases/res/atlas-campaign_masks-0.texture", 3)
        int32_t var_8_4 = 0xffffffff
        __Init_thread_footer(&data_1a8a088)

sub_69ec60(data_1a8a08c)

if (data_1a8a090 s> *(esi + 8))
    sub_75970e(&data_1a8a090)
    
    if (data_1a8a090 == 0xffffffff)
        int32_t var_8_5 = 4
        data_1a8a094 = sub_69f030("xbin/atlases/res/atlas-campaign_terrain-0.texture", 3)
        int32_t var_8_6 = 0xffffffff
        __Init_thread_footer(&data_1a8a090)

sub_69ec60(data_1a8a094)
sub_69ec60(data_171d8c0)
sub_69ec60(data_171d8dc)
void* edx_1 = data_b4a618
int32_t eax_11 = *(edx_1 + 0x1750b0)
*arg4 = edi
int32_t eax_12 = eax_11 * 3
int32_t eax_13 = *(edx_1 + 0x5058)
float xmm1_1 = *(edx_1 + (eax_12 << 2) + 0x5124) * 1024f
arg4[1] = *(edx_1 + (eax_12 << 2) + 0x5120) * 1024f
arg4[2] = xmm1_1
arg4[0x15] = eax_13
int32_t eax_15 = *(edx_1 + 0x1750b4) * 3
int32_t eax_16 = *(edx_1 + 0x505c)
float xmm1_3 = *(edx_1 + (eax_15 << 2) + 0x5124) * 1024f
arg4[3] = *(edx_1 + (eax_15 << 2) + 0x5120) * 1024f
arg4[4] = xmm1_3
arg4[0x16] = eax_16
int32_t eax_18 = *(edx_1 + 0x1750b8) * 3
int32_t eax_19 = *(edx_1 + 0x5060)
float xmm1_5 = *(edx_1 + (eax_18 << 2) + 0x5124) * 1024f
arg4[5] = *(edx_1 + (eax_18 << 2) + 0x5120) * 1024f
arg4[6] = xmm1_5
arg4[0x17] = eax_19
int32_t eax_21 = *(edx_1 + 0x1750bc) * 3
int32_t eax_22 = *(edx_1 + 0x5064)
float xmm1_7 = *(edx_1 + (eax_21 << 2) + 0x5124) * 1024f
arg4[7] = *(edx_1 + (eax_21 << 2) + 0x5120) * 1024f
arg4[8] = xmm1_7
arg4[0x18] = eax_22
int32_t eax_24 = *(edx_1 + 0x1750c0) * 3
int32_t eax_25 = *(edx_1 + 0x5068)
float xmm1_9 = *(edx_1 + (eax_24 << 2) + 0x5124) * 1024f
arg4[9] = *(edx_1 + (eax_24 << 2) + 0x5120) * 1024f
arg4[0xa] = xmm1_9
arg4[0x19] = eax_25
int32_t eax_27 = *(edx_1 + 0x1750c4) * 3
int32_t eax_28 = *(edx_1 + 0x506c)
float xmm1_11 = *(edx_1 + (eax_27 << 2) + 0x5124) * 1024f
arg4[0xb] = *(edx_1 + (eax_27 << 2) + 0x5120) * 1024f
arg4[0xc] = xmm1_11
arg4[0x1a] = eax_28
int32_t eax_30 = *(edx_1 + 0x1750c8) * 3
int32_t eax_31 = *(edx_1 + 0x5070)
float xmm1_13 = *(edx_1 + (eax_30 << 2) + 0x5124) * 1024f
arg4[0xd] = *(edx_1 + (eax_30 << 2) + 0x5120) * 1024f
arg4[0xe] = xmm1_13
arg4[0x1b] = eax_31
int32_t eax_33 = *(edx_1 + 0x1750cc) * 3
int32_t ecx_8 = *(edx_1 + 0x507c)
int32_t eax_34 = *(edx_1 + 0x5074)
float xmm1_15 = *(edx_1 + (eax_33 << 2) + 0x5124) * 1024f
arg4[0xf] = *(edx_1 + (eax_33 << 2) + 0x5120) * 1024f
arg4[0x10] = xmm1_15
arg4[0x1c] = eax_34
int32_t eax_36 = *(edx_1 + 0x1750d0) * 3
int32_t eax_37 = *(edx_1 + 0x5078)
float xmm1_17 = *(edx_1 + (eax_36 << 2) + 0x5124) * 1024f
arg4[0x11] = *(edx_1 + (eax_36 << 2) + 0x5120) * 1024f
arg4[0x12] = xmm1_17
arg4[0x1d] = eax_37
int32_t eax_39 = *(edx_1 + 0x1750d4) * 3
float xmm1_19 = *(edx_1 + (eax_39 << 2) + 0x5124) * 1024f
arg4[0x13] = *(edx_1 + (eax_39 << 2) + 0x5120) * 1024f
arg4[0x14] = xmm1_19
arg4[0x1e] = ecx_8
arg4[0x1f] = *(edx_1 + 0x21b0e8)
arg4[0x20] = *(edx_1 + 0x21b0ec)
arg4[0x21] = *(edx_1 + 0x21b0f0)
arg4[0x22] = *(edx_1 + 0x21b0f4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg4
