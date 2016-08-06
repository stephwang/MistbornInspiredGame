#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LevelManager
struct LevelManager_t2278695849;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m4213759250 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Start()
extern "C"  void LevelManager_Start_m3160897042 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3246612564 (LevelManager_t2278695849 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevelByNumber(System.Int32)
extern "C"  void LevelManager_LoadLevelByNumber_m3688531807 (LevelManager_t2278695849 * __this, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3804828720 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m1768606331 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::ReloadLevel()
extern "C"  void LevelManager_ReloadLevel_m3622237595 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelManager::GetLevelNumber()
extern "C"  int32_t LevelManager_GetLevelNumber_m3891521335 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
