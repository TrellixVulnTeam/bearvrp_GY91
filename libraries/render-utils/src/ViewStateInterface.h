//
//  ViewStateInterface.h
//  interface/src/renderer
//
//  Created by Brad Hefta-Gaub on 12/16/14.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_ViewStateInterface_h
#define hifi_ViewStateInterface_h

#include <ViewFrustum.h>

/// Interface provided by Application to other objects that need access to the current view state details
class ViewStateInterface {
public:
    
    /// Returns the shadow distances for the current view state
    virtual const glm::vec3& getShadowDistances() const = 0;

    /// Computes the off-axis frustum parameters for the view frustum, taking mirroring into account.
    virtual void computeOffAxisFrustum(float& left, float& right, float& bottom, float& top, float& nearVal,
        float& farVal, glm::vec4& nearClipPlane, glm::vec4& farClipPlane) const = 0;

    /// gets the current view frustum for rendering the view state
    virtual ViewFrustum* getCurrentViewFrustum() = 0;

    virtual bool getShadowsEnabled() = 0;
    virtual bool getCascadeShadowsEnabled() = 0;
};


#endif // hifi_ViewStateInterface_h
