/////////////////////////////////////////////////////////////////////////////
// Name:        systemms.h
// Author:      Laurent Pugin
// Created:     2016
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_SYSTEM_MS_H__
#define __VRV_SYSTEM_MS_H__

#include "systemelement.h"
#include "vrvdef.h"

namespace vrv {

class Measure;
class Object;

//----------------------------------------------------------------------------
// SystemMsEnd
//----------------------------------------------------------------------------

/**
 * This class models an end milestone element MsEnd at the system level.
 */
class SystemMsEnd : public SystemElement {
public:
    /**
     * @name Constructors, destructors, reset methods
     * Reset method reset all attribute classes
     */
    ///@{
    SystemMsEnd(Object *start);
    virtual ~SystemMsEnd();
    void Reset() override;
    std::string GetClassName() const override { return "SystemMsEnd"; }
    ///@}

    void SetMeasure(Measure *measure) { m_drawingMeasure = measure; }
    Measure *GetMeasure() { return m_drawingMeasure; }

    /**
     * @name Get the corresponding milestone start
     */
    ///@{
    Object *GetStart() { return m_start; }
    std::string GetStartClassName() const { return m_startClassName; }
    ///@}

    //----------//
    // Functors //
    //----------//

    /**
     * See Object::PrepareBoundaries
     */
    int PrepareBoundaries(FunctorParams *functorParams) override;

    /**
     * See Object::ResetDrawing
     */
    int ResetDrawing(FunctorParams *functorParams) override;

    /**
     * See Object::CastOffSystems
     */
    int CastOffSystems(FunctorParams *functorParams) override;

    /**
     * See Object::PrepareFloatingGrps
     */
    int PrepareFloatingGrps(FunctorParams *functorParams) override;

protected:
    //
private:
    //
public:
    //
protected:
    Object *m_start;

private:
    /** The class name of the corresponding start */
    std::string m_startClassName;
    /** The last measure child of the element */
    Measure *m_drawingMeasure;
};

//----------------------------------------------------------------------------
// SystemMsInterface
//----------------------------------------------------------------------------

/**
 * This class is an interface for container elements that have to be turned to milestones in a page-base representation.
 */
class SystemMsInterface {
public:
    /**
     * @name Constructors, destructors, reset methods
     * Reset method reset all attribute classes
     */
    ///@{
    SystemMsInterface();
    virtual ~SystemMsInterface();
    virtual void Reset();
    ///@}

    void SetMeasure(Measure *measure) { m_drawingMeasure = measure; }
    Measure *GetMeasure() { return m_drawingMeasure; }

    /**
     * @name Set and get the first LayerElement
     * The setter asserts that no LayerElement was previously set.
     */
    ///@{
    void SetEnd(SystemMsEnd *end);
    SystemMsEnd *GetEnd() { return m_end; }
    bool IsSystemMs() { return (m_end != NULL); }
    ///@}

    /**
     *
     */
    void ConvertToPageBasedBoundary(Object *object, Object *parent);

    //-----------------//
    // Pseudo functors //
    //-----------------//

    /**
     * See Object::PrepareBoundaries
     * Called from Ending::PrepareBoundaries and EditorialElement::PrepareBoundaries
     */
    virtual int InterfacePrepareBoundaries(FunctorParams *functorParams);

    /**
     * Reset the drawing values before calling PrepareDrawing after changes.
     * Called from Ending::ResetDrawing and EditorialElement::ResetDrawing
     */
    virtual int InterfaceResetDrawing(FunctorParams *functorParams);

protected:
    //
private:
    //
public:
    //
protected:
    SystemMsEnd *m_end;

private:
    /** The first measure child of the element */
    Measure *m_drawingMeasure;
};

} // namespace vrv

#endif
