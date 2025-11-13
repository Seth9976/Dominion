// 函数: _Z19SoundOggParseHeaderP18DefSoundImportData
// 地址: 0xfa9588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
DefSoundImportData* var_48 = arg1
int64_t var_50 = 0
int32_t var_40 = 0
int128_t var_420
__builtin_memcpy(&var_420, 
    "\xe0\x93\xfa\x00\x00\x00\x00\x00\xc8\x94\xfa\x00\x00\x00\x00\x00\x78\x95\xfa\x00\x00\x00\x00\x00\x"
"80\x95\xfa\x00\x00\x00\x00\x00", 
    0x20)
void var_400
int32_t x0_1 = ov_open_callbacks(&var_400, &var_400, 0, 0, &var_420)

if ((x0_1 & 0x80000000) == 0)
    void* x0_3 = ov_info(&var_400, 0xffffffff)
    *(arg1 + 4) = 0x10
    *(arg1 + 8) = *(x0_3 + 4)
    *arg1 = (*(x0_3 + 8)).d
    *(arg1 + 0xc) = (ov_pcm_total(&var_400, 0xffffffff) * *(x0_3 + 4)) << 1
    ov_clear(&var_400)

if (*(x22 + 0x28) == x8)
    return zx.q(not.d(x0_1) u>> 0x1f)

__stack_chk_fail()
noreturn
