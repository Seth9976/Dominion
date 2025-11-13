// 函数: _Z22UI2EditorResyncUIAssetf
// 地址: 0x102cea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = RectEditor(zx.q(*(gUI2Editor + 0x8c3e0)))
uint64_t x0_1 = zx.q(*(gUI2Editor + 0x8c3e0))
float var_30 = v0
float var_2c = v1
float var_28 = v2
float var_24 = v3

if (x0_1.d u>= 3)
    if (x0_1.d != 3)
        pthread_kill(pthread_self(), 6)
        return UI2RestoreUndoState(XNoReturn()) __tailcall
    
    v1 = 0f
    v3 = float.s(0x4484c000)
    v2 = float.s(0x45100000)
    v0 = float.s(0x43040000)
else
    v0, v1, v2, v3 = RectEditor(x0_1)

XAsset* x2 = *(gUI2Editor + 0x6008)
float var_40 = v0
float var_3c = v1
float var_38 = v2
float var_34 = v3
int32_t x0_2
int128_t v0_1
int128_t v1_1
x0_2, v0_1, v1_1 = UI2Begin("editor asset", gUI2Editor + 0x6010, x2, &var_30, &var_40, 0, 0, false)
*(gUI2Editor + 0x8806b) = x0_2.b & 1

if ((x0_2 & 1) != 0)
    v0_1, v1_1 = XTrace("reloaded ui asset")

v0_1.q = *(gUI2Editor + 0x6040)
int32_t v2_1 = *(gUI2Editor + 0x603c)
v1_1 = *TI
int32_t x8_1 = *(TI + 0x10)
uint64_t x0_3 = zx.q(*(gUI2Editor + 0x6010))
double v0_2
v0_2.d = vneg_f32(v0_1).d f* v2_1
v0_2:4.d = v0_2:4.d f* v2_1
int128_t var_60 = v1_1
int32_t var_50 = x8_1
var_60.d = v2_1
double var_4c = v0_2
int32_t var_44 = 0
UI2ApplyTransform(x0_3, &var_60)
UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8, UIS_EDITOR, 0xffffffff, 0, 
    fconvert.s(1f))
UI2EditorSyncDisplayTree()
return UI2UpdateRoot(zx.q(*(gUI2Editor + 0x6010)), true, arg1) __tailcall
