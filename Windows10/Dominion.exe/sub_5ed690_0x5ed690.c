// 函数: sub_5ed690
// 地址: 0x5ed690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1ThreadProxy@details@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *fsbase->ThreadLocalStoragePointer

if (data_1a93ad8 s> *(esi + 8))
    sub_75970e(&data_1a93ad8)
    
    if (data_1a93ad8 == 0xffffffff)
        int32_t var_8_1 = 0
        data_1a93adc = sub_69f030("xbin/atlases/res/atlas-box_art-0.texture", 3)
        int32_t var_8_2 = 0xffffffff
        __Init_thread_footer(&data_1a93ad8)

if (data_1a93ae0 s> *(esi + 8))
    sub_75970e(&data_1a93ae0)
    
    if (data_1a93ae0 == 0xffffffff)
        int32_t var_8_3 = 1
        data_1a93ae4 = sub_69f030("xbin/atlases/res/atlas-campaign-0.texture", 3)
        int32_t var_8_4 = 0xffffffff
        __Init_thread_footer(&data_1a93ae0)

if (data_1a93ae8 s> *(esi + 8))
    sub_75970e(&data_1a93ae8)
    
    if (data_1a93ae8 == 0xffffffff)
        int32_t var_8_5 = 2
        data_1a93aec = sub_69f030("xbin/atlases/res/atlas-campaign_masks-0.texture", 3)
        int32_t var_8_6 = 0xffffffff
        __Init_thread_footer(&data_1a93ae8)

if (data_1a93af0 s> *(esi + 8))
    sub_75970e(&data_1a93af0)
    
    if (data_1a93af0 == 0xffffffff)
        int32_t var_8_7 = 3
        data_1a93af4 = sub_69f030("xbin/atlases/res/atlas-campaign_terrain-0.texture", 3)
        int32_t var_8_8 = 0xffffffff
        __Init_thread_footer(&data_1a93af0)

if (data_1a93af8 s> *(esi + 8))
    sub_75970e(&data_1a93af8)
    
    if (data_1a93af8 == 0xffffffff)
        int32_t var_8_9 = 4
        data_1a93afc = sub_69f030("xbin/atlases/res/atlas-card_gen-0.texture", 3)
        int32_t var_8_10 = 0xffffffff
        __Init_thread_footer(&data_1a93af8)

if (data_1a93b00 s> *(esi + 8))
    sub_75970e(&data_1a93b00)
    
    if (data_1a93b00 == 0xffffffff)
        int32_t var_8_11 = 5
        data_1a93b04 = sub_69f030("xbin/atlases/res/atlas-images-0.texture", 3)
        __Init_thread_footer(&data_1a93b00)

sub_63b5f0("Atlases: Begin dump")

if (*data_1a93adc != 0)
    sub_63b5f0("Atlases: Box art loaded")

if (*data_1a93ae4 != 0)
    sub_63b5f0("Atlases: Campaign doodads loaded")

if (*data_1a93af4 != 0)
    sub_63b5f0("Atlases: Campaign terrain loaded")

if (*data_1a93aec != 0)
    sub_63b5f0("Atlases: Campaign masks loaded")

if (*data_1a93afc != 0)
    sub_63b5f0("Atlases: Cardgen loaded")

if (*data_1a93b04 != 0)
    sub_63b5f0("Atlases: Images loaded")

uint32_t result = sub_63b5f0("Atlases: End dump")
fsbase->NtTib.ExceptionList = ExceptionList
return result
