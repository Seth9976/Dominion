// 函数: _Z29GameResumeMultiplayerComplete9GameIndex
// 地址: 0x9ad634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GameDlgManagerShow(2, 0)
GameDlgManagerDismiss(1, false)
GameDlgManagerShow(0x27, 1)
GameDlgManagerDismiss(5, false)
void* x0 = GetClient()
int64_t x8 = *(GetClient() + 0x5080)
*(x0 + 0x5068) = 2
*(x0 + 0x506c) = x19
GameSave* x21 = x8 + mulu.dp.d(x19 & 0xffff, 0x1338)
GameSetLocalWho()
*(x0 + 0xc) = 0
*(x0 + 0x10) = 0
int32_t var_40 = 2
int32_t var_3c = *(GetClient() + 0x75b0)
int32_t var_38 = *(x21 + sx.q(*(GetClient() + 0x75b0)) * 0x18 + 0x11d0)
int32_t var_34 = 0
GameSpecific_Load(x21, &var_40, 0)
int32_t var_58
return zx.q(var_58 != 1 ? 1 : 0)
