// 函数: _Z11QuatFromYPR4Vec3
// 地址: 0xf9507c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_28 = entry_v8.q
int128_t entry_v0

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
    entry_v8 = entry_v0
    entry_v0 = entry_v8
    
    if (__cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
        entry_v0.d = *TWO_PI
        entry_v0.d = entry_v0.d f/ float.s(0x43b40000)
        *DegToRad(float)::CONVERSION = entry_v0.d
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
        entry_v0 = entry_v8

entry_v8.d = fconvert.s(0.5f)
entry_v0.d = entry_v0.d f* *DegToRad(float)::CONVERSION
entry_v0.d = entry_v0.d f* entry_v8.d
float cosp_2
float sinp_2
sincosf(&sinp_2, &cosp_2, entry_v0.d)
int64_t v10
v10.d = cosp_2
int64_t v13
v13.d = sinp_2
int64_t v11
v11.d = *VZ
int64_t v12
v12.d = *(VZ + 4)
int64_t v14
v14.d = *(VZ + 8)

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0
        && __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
    *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
    __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)

v11.d = v11.d f* v13.d
v12.d = v12.d f* v13.d
v13.d = v13.d f* v14.d
float cosp_1
float sinp_1
float entry_v1
sincosf(&sinp_1, &cosp_1, entry_v1 * *DegToRad(float)::CONVERSION f* entry_v8.d)
float sinp_3 = sinp_1
entry_v8.d = *VX * sinp_3
v14.d = *(VX + 4) f* sinp_3
int64_t v15
v15.d = sinp_3 f* *(VX + 8)

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0
        && __cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
    *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
    __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)

float cosp
float sinp
float entry_v2
int64_t result = sincosf(&sinp, &cosp, entry_v2 * *DegToRad(float)::CONVERSION * fconvert.s(0.5f))
*VY
*(VY + 4)
*(VY + 8)
entry_v8.q = var_28
return result
