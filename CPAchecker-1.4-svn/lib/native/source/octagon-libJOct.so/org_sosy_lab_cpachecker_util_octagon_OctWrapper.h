/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sosy_lab_cpachecker_util_octagon_OctWrapper */

#ifndef _Included_org_sosy_lab_cpachecker_util_octagon_OctWrapper
#define _Included_org_sosy_lab_cpachecker_util_octagon_OctWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1init
  (JNIEnv *, jclass);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_init_n
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1init_1n
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_set
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1set
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_set_int
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1set_1int
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_set_float
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1set_1float
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_set_inf
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1set_1inf
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_get_int
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1get_1int
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_get_float
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1get_1float
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_infty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1infty
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_num_clear_n
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1num_1clear_1n
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_get_bounds
 * Signature: (JIJJ)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1get_1bounds
  (JNIEnv *env, jobject obj, jlong octl, jint pos, jlong upper, jlong lower);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_get_bounds
 * Signature: (JIJJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1set_1bounds
  (JNIEnv *env, jobject obj, jlong octl, jint pos, jlong upper, jlong lower, jboolean dest);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_empty
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1empty
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_universe
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1universe
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_copy
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1copy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_full_copy
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1full_1copy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_dimension
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1dimension
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_nbconstraints
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1nbconstraints
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isEmpty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isEmptyLazy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isEmptyLazy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isUniverse
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isUniverse
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isIncludedIn
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isIncludedIn
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isIncludedInLazy
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isIncludedInLazy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isEqual
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isEqual
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isEqualLazy
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isEqualLazy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_isIn
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1isIn
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_intersection
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1intersection
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_union
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1union
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_widening
 * Signature: (JJZI)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1widening
  (JNIEnv *, jclass, jlong, jlong, jboolean, jint);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_narrowing
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1narrowing
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_forget
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1forget
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_assingVar
 * Signature: (JIJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1assingVar
  (JNIEnv *, jclass, jlong, jint, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_addBinConstraints
 * Signature: (JIJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1addBinConstraints
  (JNIEnv *, jclass, jlong, jint, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_substituteVar
 * Signature: (JIJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1substituteVar
  (JNIEnv *, jclass, jlong, jint, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_addConstraint
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1addConstraint
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_intervAssingVar
 * Signature: (JIJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1intervAssingVar
  (JNIEnv *, jclass, jlong, jint, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_intervSubstituteVar
 * Signature: (JIJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1intervSubstituteVar
  (JNIEnv *, jclass, jlong, jint, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_intervAddConstraint
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1intervAddConstraint
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_addDimenensionAndEmbed
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1addDimenensionAndEmbed
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_addDimenensionAndProject
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1addDimenensionAndProject
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_removeDimension
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1removeDimension
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    J_print
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1print
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    getRandomOct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_getRandomOct
  (JNIEnv *, jclass);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    getValueFor
 * Signature: (JJJ)J
 */
JNIEXPORT jdouble JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1getValueFor
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_sosy_lab_cpachecker_util_octagon_OctWrapper
 * Method:    printNum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_sosy_1lab_cpachecker_util_octagon_OctWrapper_J_1printNum
  (JNIEnv *, jobject, jlong, jint);
  
  
#ifdef __cplusplus
}
#endif
#endif