#include "main.h"

extern "C"
{
	EXPORT btMultiBody* btMultiBody_new(int n_links, btScalar mass, const btScalar* inertia, bool fixedBase, bool canSleep);
	EXPORT void btMultiBody_addBaseConstraintForce(btMultiBody* obj, const btScalar* f);
	EXPORT void btMultiBody_addBaseConstraintTorque(btMultiBody* obj, const btScalar* t);
	EXPORT void btMultiBody_addBaseForce(btMultiBody* obj, const btScalar* f);
	EXPORT void btMultiBody_addBaseTorque(btMultiBody* obj, const btScalar* t);
	EXPORT void btMultiBody_addJointTorque(btMultiBody* obj, int i, btScalar Q);
	EXPORT void btMultiBody_addJointTorqueMultiDof(btMultiBody* obj, int i, const btScalar* Q);
	EXPORT void btMultiBody_addJointTorqueMultiDof2(btMultiBody* obj, int i, int dof, btScalar Q);
	EXPORT void btMultiBody_addLinkConstraintForce(btMultiBody* obj, int i, const btScalar* f);
	EXPORT void btMultiBody_addLinkConstraintTorque(btMultiBody* obj, int i, const btScalar* t);
	EXPORT void btMultiBody_addLinkForce(btMultiBody* obj, int i, const btScalar* f);
	EXPORT void btMultiBody_addLinkTorque(btMultiBody* obj, int i, const btScalar* t);
	EXPORT void btMultiBody_applyDeltaVeeMultiDof(btMultiBody* obj, const btScalar* delta_vee, btScalar multiplier);
	EXPORT void btMultiBody_applyDeltaVeeMultiDof2(btMultiBody* obj, const btScalar* delta_vee, btScalar multiplier);
	EXPORT void btMultiBody_calcAccelerationDeltasMultiDof(btMultiBody* obj, const btScalar* force, btScalar* output, btAlignedScalarArray* scratch_r, btAlignedVector3Array* scratch_v);
	EXPORT int btMultiBody_calculateSerializeBufferSize(btMultiBody* obj);
	EXPORT void btMultiBody_checkMotionAndSleepIfRequired(btMultiBody* obj, btScalar timestep);
	EXPORT void btMultiBody_clearConstraintForces(btMultiBody* obj);
	EXPORT void btMultiBody_clearForcesAndTorques(btMultiBody* obj);
	EXPORT void btMultiBody_clearVelocities(btMultiBody* obj);
	EXPORT void btMultiBody_computeAccelerationsArticulatedBodyAlgorithmMultiDof(btMultiBody* obj, btScalar dt, btAlignedScalarArray* scratch_r, btAlignedVector3Array* scratch_v, btAlignedMatrix3x3Array* scratch_m);
	EXPORT void btMultiBody_computeAccelerationsArticulatedBodyAlgorithmMultiDof2(btMultiBody* obj, btScalar dt, btAlignedScalarArray* scratch_r, btAlignedVector3Array* scratch_v, btAlignedMatrix3x3Array* scratch_m, bool isConstraintPass);
	EXPORT void btMultiBody_fillConstraintJacobianMultiDof(btMultiBody* obj, int link, const btScalar* contact_point, const btScalar* normal_ang, const btScalar* normal_lin, btScalar* jac, btAlignedScalarArray* scratch_r, btAlignedVector3Array* scratch_v, btAlignedMatrix3x3Array* scratch_m);
	EXPORT void btMultiBody_fillContactJacobianMultiDof(btMultiBody* obj, int link, const btScalar* contact_point, const btScalar* normal, btScalar* jac, btAlignedScalarArray* scratch_r, btAlignedVector3Array* scratch_v, btAlignedMatrix3x3Array* scratch_m);
	EXPORT void btMultiBody_finalizeMultiDof(btMultiBody* obj);
	EXPORT void btMultiBody_forwardKinematics(btMultiBody* obj, btAlignedQuaternionArray* scratch_q, btAlignedVector3Array* scratch_m);
	EXPORT btScalar btMultiBody_getAngularDamping(btMultiBody* obj);
	EXPORT void btMultiBody_getAngularMomentum(btMultiBody* obj, btScalar* value);
	EXPORT btMultiBodyLinkCollider* btMultiBody_getBaseCollider(btMultiBody* obj);
	EXPORT void btMultiBody_getBaseForce(btMultiBody* obj, btScalar* value);
	EXPORT void btMultiBody_getBaseInertia(btMultiBody* obj, btScalar* inertia);
	EXPORT btScalar btMultiBody_getBaseMass(btMultiBody* obj);
	EXPORT const char* btMultiBody_getBaseName(btMultiBody* obj);
	EXPORT void btMultiBody_getBaseOmega(btMultiBody* obj, btScalar* omega);
	EXPORT void btMultiBody_getBasePos(btMultiBody* obj, btScalar* pos);
	EXPORT void btMultiBody_getBaseTorque(btMultiBody* obj, btScalar* value);
	EXPORT void btMultiBody_getBaseVel(btMultiBody* obj, btScalar* vel);
	EXPORT void btMultiBody_getBaseWorldTransform(btMultiBody* obj, btScalar* tr);
	EXPORT bool btMultiBody_getCanSleep(btMultiBody* obj);
	EXPORT int btMultiBody_getCompanionId(btMultiBody* obj);
	EXPORT btScalar btMultiBody_getJointPos(btMultiBody* obj, int i);
	EXPORT btScalar* btMultiBody_getJointPosMultiDof(btMultiBody* obj, int i);
	EXPORT btScalar btMultiBody_getJointTorque(btMultiBody* obj, int i);
	EXPORT btScalar* btMultiBody_getJointTorqueMultiDof(btMultiBody* obj, int i);
	EXPORT btScalar btMultiBody_getJointVel(btMultiBody* obj, int i);
	EXPORT btScalar* btMultiBody_getJointVelMultiDof(btMultiBody* obj, int i);
	EXPORT btScalar btMultiBody_getKineticEnergy(btMultiBody* obj);
	EXPORT btScalar btMultiBody_getLinearDamping(btMultiBody* obj);
	EXPORT btMultibodyLink* btMultiBody_getLink(btMultiBody* obj, int index);
	EXPORT void btMultiBody_getLinkForce(btMultiBody* obj, int i, btScalar* value);
	EXPORT void btMultiBody_getLinkInertia(btMultiBody* obj, int i, btScalar* value);
	EXPORT btScalar btMultiBody_getLinkMass(btMultiBody* obj, int i);
	EXPORT void btMultiBody_getLinkTorque(btMultiBody* obj, int i, btScalar* value);
	EXPORT btScalar btMultiBody_getMaxAppliedImpulse(btMultiBody* obj);
	EXPORT btScalar btMultiBody_getMaxCoordinateVelocity(btMultiBody* obj);
	EXPORT int btMultiBody_getNumDofs(btMultiBody* obj);
	EXPORT int btMultiBody_getNumLinks(btMultiBody* obj);
	EXPORT int btMultiBody_getNumPosVars(btMultiBody* obj);
	EXPORT int btMultiBody_getParent(btMultiBody* obj, int link_num);
	EXPORT void btMultiBody_getParentToLocalRot(btMultiBody* obj, int i, btScalar* value);
	EXPORT void btMultiBody_getRVector(btMultiBody* obj, int i, btScalar* value);
	EXPORT bool btMultiBody_getUseGyroTerm(btMultiBody* obj);
	EXPORT const btScalar* btMultiBody_getVelocityVector(btMultiBody* obj);
	EXPORT void btMultiBody_getWorldToBaseRot(btMultiBody* obj, btScalar* rot);
	EXPORT void btMultiBody_goToSleep(btMultiBody* obj);
	EXPORT bool btMultiBody_hasFixedBase(btMultiBody* obj);
	EXPORT bool btMultiBody_hasSelfCollision(btMultiBody* obj);
	EXPORT bool btMultiBody_internalNeedsJointFeedback(btMultiBody* obj);
	EXPORT bool btMultiBody_isAwake(btMultiBody* obj);
	EXPORT bool btMultiBody_isPosUpdated(btMultiBody* obj);
	EXPORT bool btMultiBody_isUsingGlobalVelocities(btMultiBody* obj);
	EXPORT bool btMultiBody_isUsingRK4Integration(btMultiBody* obj);
	EXPORT void btMultiBody_localDirToWorld(btMultiBody* obj, int i, const btScalar* vec, btScalar* value);
	EXPORT void btMultiBody_localPosToWorld(btMultiBody* obj, int i, const btScalar* vec, btScalar* value);
	EXPORT void btMultiBody_processDeltaVeeMultiDof2(btMultiBody* obj);
	EXPORT const char* btMultiBody_serialize(btMultiBody* obj, void* dataBuffer, btSerializer* serializer);
	EXPORT void btMultiBody_setAngularDamping(btMultiBody* obj, btScalar damp);
	EXPORT void btMultiBody_setBaseCollider(btMultiBody* obj, btMultiBodyLinkCollider* collider);
	EXPORT void btMultiBody_setBaseInertia(btMultiBody* obj, const btScalar* inertia);
	EXPORT void btMultiBody_setBaseMass(btMultiBody* obj, btScalar mass);
	EXPORT void btMultiBody_setBaseName(btMultiBody* obj, const char* name);
	EXPORT void btMultiBody_setBaseOmega(btMultiBody* obj, const btScalar* omega);
	EXPORT void btMultiBody_setBasePos(btMultiBody* obj, const btScalar* pos);
	EXPORT void btMultiBody_setBaseVel(btMultiBody* obj, const btScalar* vel);
	EXPORT void btMultiBody_setBaseWorldTransform(btMultiBody* obj, const btScalar* tr);
	EXPORT void btMultiBody_setCanSleep(btMultiBody* obj, bool canSleep);
	EXPORT void btMultiBody_setCompanionId(btMultiBody* obj, int id);
	EXPORT void btMultiBody_setHasSelfCollision(btMultiBody* obj, bool hasSelfCollision);
	EXPORT void btMultiBody_setJointPos(btMultiBody* obj, int i, btScalar q);
	EXPORT void btMultiBody_setJointPosMultiDof(btMultiBody* obj, int i, btScalar* q);
	EXPORT void btMultiBody_setJointVel(btMultiBody* obj, int i, btScalar qdot);
	EXPORT void btMultiBody_setJointVelMultiDof(btMultiBody* obj, int i, btScalar* qdot);
	EXPORT void btMultiBody_setLinearDamping(btMultiBody* obj, btScalar damp);
	EXPORT void btMultiBody_setMaxAppliedImpulse(btMultiBody* obj, btScalar maxImp);
	EXPORT void btMultiBody_setMaxCoordinateVelocity(btMultiBody* obj, btScalar maxVel);
	EXPORT void btMultiBody_setNumLinks(btMultiBody* obj, int numLinks);
	EXPORT void btMultiBody_setPosUpdated(btMultiBody* obj, bool updated);
	EXPORT void btMultiBody_setupFixed(btMultiBody* obj, int linkIndex, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset);
	EXPORT void btMultiBody_setupPlanar(btMultiBody* obj, int i, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* rotationAxis, const btScalar* parentComToThisComOffset);
	EXPORT void btMultiBody_setupPlanar2(btMultiBody* obj, int i, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* rotationAxis, const btScalar* parentComToThisComOffset, bool disableParentCollision);
	EXPORT void btMultiBody_setupPrismatic(btMultiBody* obj, int i, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* jointAxis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset, bool disableParentCollision);
	EXPORT void btMultiBody_setupRevolute(btMultiBody* obj, int linkIndex, btScalar mass, const btScalar* inertia, int parentIndex, const btScalar* rotParentToThis, const btScalar* jointAxis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset);
	EXPORT void btMultiBody_setupRevolute2(btMultiBody* obj, int linkIndex, btScalar mass, const btScalar* inertia, int parentIndex, const btScalar* rotParentToThis, const btScalar* jointAxis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset, bool disableParentCollision);
	EXPORT void btMultiBody_setupSpherical(btMultiBody* obj, int linkIndex, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset);
	EXPORT void btMultiBody_setupSpherical2(btMultiBody* obj, int linkIndex, btScalar mass, const btScalar* inertia, int parent, const btScalar* rotParentToThis, const btScalar* parentComToThisPivotOffset, const btScalar* thisPivotToThisComOffset, bool disableParentCollision);
	EXPORT void btMultiBody_setUseGyroTerm(btMultiBody* obj, bool useGyro);
	EXPORT void btMultiBody_setWorldToBaseRot(btMultiBody* obj, const btScalar* rot);
	EXPORT void btMultiBody_stepPositionsMultiDof(btMultiBody* obj, btScalar dt);
	EXPORT void btMultiBody_stepPositionsMultiDof2(btMultiBody* obj, btScalar dt, btScalar* pq);
	EXPORT void btMultiBody_stepPositionsMultiDof3(btMultiBody* obj, btScalar dt, btScalar* pq, btScalar* pqd);
	EXPORT void btMultiBody_updateCollisionObjectWorldTransforms(btMultiBody* obj, btAlignedQuaternionArray* scratch_q, btAlignedVector3Array* scratch_m);
	EXPORT void btMultiBody_useGlobalVelocities(btMultiBody* obj, bool use);
	EXPORT void btMultiBody_useRK4Integration(btMultiBody* obj, bool use);
	EXPORT void btMultiBody_wakeUp(btMultiBody* obj);
	EXPORT void btMultiBody_worldDirToLocal(btMultiBody* obj, int i, const btScalar* vec, btScalar* value);
	EXPORT void btMultiBody_worldPosToLocal(btMultiBody* obj, int i, const btScalar* vec, btScalar* value);
	EXPORT void btMultiBody_delete(btMultiBody* obj);
}
