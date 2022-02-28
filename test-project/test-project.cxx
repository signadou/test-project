// NX 1953.1700
// Journal created by demo-user on Sat May 15 08:21:56 2021 Eastern Daylight Time
//
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_DatumPlaneBuilder.hxx>
#include <NXOpen/Features_DatumPlaneFeature.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/MeasureManager.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneTypes.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/PreviewBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/Scalar.hxx>
#include <NXOpen/ScalarCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/SmartObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
// We are currently testing removal of using namespace NXOpen.
// Uncomment the below line if your journal does not compile.
// using namespace NXOpen;

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
}

extern "C" DllExport void ufusr(char *param, int *retCode, int paramLen)
{
    NXOpen::Session *theSession = NXOpen::Session::GetSession();
    NXOpen::Part *workPart(theSession->Parts()->Work());
    NXOpen::Part *displayPart(theSession->Parts()->Display());
    // ----------------------------------------------
    //   Menu: Insert->Datum->Datum Plane...
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId1;
    markId1 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "Start");

    NXOpen::Features::Feature *nullNXOpen_Features_Feature(NULL);
    NXOpen::Features::DatumPlaneBuilder *datumPlaneBuilder1;
    datumPlaneBuilder1 = workPart->Features()->CreateDatumPlaneBuilder(nullNXOpen_Features_Feature);

    NXOpen::Plane *plane1;
    plane1 = datumPlaneBuilder1->GetPlane();

    NXOpen::Unit *unit1(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("MilliMeter")));
    NXOpen::Expression *expression1;
    expression1 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

    NXOpen::Expression *expression2;
    expression2 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

    NXOpen::Point3d coordinates1(0.0, 0.0, 0.0);
    NXOpen::Point *point1;
    point1 = workPart->Points()->CreatePoint(coordinates1);

    theSession->SetUndoMarkName(markId1, "Datum Plane Dialog");

    plane1->SetUpdateOption(NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Session::UndoMarkId markId2;
    markId2 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Start");

    NXOpen::Expression *expression3;
    expression3 = workPart->Expressions()->CreateSystemExpressionWithUnits("0", unit1);

    NXOpen::Expression *expression4;
    expression4 = workPart->Expressions()->CreateSystemExpressionWithUnits("p3_x=0.00000000000", unit1);

    NXOpen::Expression *expression5;
    expression5 = workPart->Expressions()->CreateSystemExpressionWithUnits("p4_y=0.00000000000", unit1);

    NXOpen::Expression *expression6;
    expression6 = workPart->Expressions()->CreateSystemExpressionWithUnits("p5_z=0.00000000000", unit1);

    NXOpen::Expression *expression7;
    expression7 = workPart->Expressions()->CreateSystemExpressionWithUnits("p6_xdelta=0.00000000000", unit1);

    NXOpen::Expression *expression8;
    expression8 = workPart->Expressions()->CreateSystemExpressionWithUnits("p7_ydelta=0.00000000000", unit1);

    NXOpen::Expression *expression9;
    expression9 = workPart->Expressions()->CreateSystemExpressionWithUnits("p8_zdelta=0.00000000000", unit1);

    NXOpen::Expression *expression10;
    expression10 = workPart->Expressions()->CreateSystemExpressionWithUnits("p9_radius=0.00000000000", unit1);

    NXOpen::Unit *unit2(dynamic_cast<NXOpen::Unit *>(workPart->UnitCollection()->FindObject("Degrees")));
    NXOpen::Expression *expression11;
    expression11 = workPart->Expressions()->CreateSystemExpressionWithUnits("p10_angle=0.00000000000", unit2);

    NXOpen::Expression *expression12;
    expression12 = workPart->Expressions()->CreateSystemExpressionWithUnits("p11_zdelta=0.00000000000", unit1);

    NXOpen::Expression *expression13;
    expression13 = workPart->Expressions()->CreateSystemExpressionWithUnits("p12_radius=0.00000000000", unit1);

    NXOpen::Expression *expression14;
    expression14 = workPart->Expressions()->CreateSystemExpressionWithUnits("p13_angle1=0.00000000000", unit2);

    NXOpen::Expression *expression15;
    expression15 = workPart->Expressions()->CreateSystemExpressionWithUnits("p14_angle2=0.00000000000", unit2);

    NXOpen::Expression *expression16;
    expression16 = workPart->Expressions()->CreateSystemExpressionWithUnits("p15_distance=0", unit1);

    NXOpen::Expression *expression17;
    expression17 = workPart->Expressions()->CreateSystemExpressionWithUnits("p16_arclen=0", unit1);

    NXOpen::Unit *nullNXOpen_Unit(NULL);
    NXOpen::Expression *expression18;
    expression18 = workPart->Expressions()->CreateSystemExpressionWithUnits("p17_percent=0", nullNXOpen_Unit);

    expression4->SetFormula("49.77828028063");

    expression5->SetFormula("-48.60024270601");

    expression6->SetFormula("73.22988808812");

    expression7->SetFormula("0");

    expression8->SetFormula("0");

    expression9->SetFormula("0");

    expression10->SetFormula("0");

    expression11->SetFormula("0");

    expression12->SetFormula("0");

    expression13->SetFormula("0");

    expression14->SetFormula("0");

    expression15->SetFormula("0");

    expression16->SetFormula("0");

    expression18->SetFormula("100");

    expression17->SetFormula("0");

    theSession->SetUndoMarkName(markId2, "Point Dialog");

    NXOpen::Expression *expression19;
    expression19 = workPart->Expressions()->CreateSystemExpressionWithUnits("p18_x=0.00000000000", unit1);

    NXOpen::Scalar *scalar1;
    scalar1 = workPart->Scalars()->CreateScalarExpression(expression19, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Expression *expression20;
    expression20 = workPart->Expressions()->CreateSystemExpressionWithUnits("p19_y=0.00000000000", unit1);

    NXOpen::Scalar *scalar2;
    scalar2 = workPart->Scalars()->CreateScalarExpression(expression20, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Expression *expression21;
    expression21 = workPart->Expressions()->CreateSystemExpressionWithUnits("p20_z=0.00000000000", unit1);

    NXOpen::Scalar *scalar3;
    scalar3 = workPart->Scalars()->CreateScalarExpression(expression21, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Point *point2;
    point2 = workPart->Points()->CreatePoint(scalar1, scalar2, scalar3, NXOpen::SmartObject::UpdateOptionWithinModeling);

    expression4->SetFormula("0");

    expression5->SetFormula("0");

    expression6->SetFormula("0");

    expression4->SetFormula("0.00000000000");

    expression5->SetFormula("0.00000000000");

    expression6->SetFormula("0.00000000000");

    expression4->SetFormula("0");

    expression5->SetFormula("0");

    expression6->SetFormula("0");

    expression4->SetFormula("0.00000000000");

    expression5->SetFormula("0.00000000000");

    expression6->SetFormula("0.00000000000");

    expression7->SetFormula("0.00000000000");

    expression8->SetFormula("0.00000000000");

    expression9->SetFormula("0.00000000000");

    expression10->SetFormula("0.00000000000");

    expression11->SetFormula("0.00000000000");

    expression12->SetFormula("0.00000000000");

    expression13->SetFormula("0.00000000000");

    expression14->SetFormula("0.00000000000");

    expression15->SetFormula("0.00000000000");

    expression18->SetFormula("100.00000000000");

    // ----------------------------------------------
    //   Dialog Begin Point
    // ----------------------------------------------
    NXOpen::Session::UndoMarkId markId3;
    markId3 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Point");

    theSession->DeleteUndoMark(markId3, NULL);

    NXOpen::Session::UndoMarkId markId4;
    markId4 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Point");

    expression4->SetRightHandSide("0.00000000000");

    expression5->SetRightHandSide("0.00000000000");

    expression6->SetRightHandSide("0.00000000000");

    workPart->Points()->DeletePoint(point2);

    NXOpen::Expression *expression22;
    expression22 = workPart->Expressions()->CreateSystemExpressionWithUnits("p4_x=0.00000000000", unit1);

    NXOpen::Scalar *scalar4;
    scalar4 = workPart->Scalars()->CreateScalarExpression(expression22, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Expression *expression23;
    expression23 = workPart->Expressions()->CreateSystemExpressionWithUnits("p5_y=0.00000000000", unit1);

    NXOpen::Scalar *scalar5;
    scalar5 = workPart->Scalars()->CreateScalarExpression(expression23, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Expression *expression24;
    expression24 = workPart->Expressions()->CreateSystemExpressionWithUnits("p6_z=0.00000000000", unit1);

    NXOpen::Scalar *scalar6;
    scalar6 = workPart->Scalars()->CreateScalarExpression(expression24, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Point *point3;
    point3 = workPart->Points()->CreatePoint(scalar4, scalar5, scalar6, NXOpen::SmartObject::UpdateOptionWithinModeling);

    theSession->DeleteUndoMark(markId4, NULL);

    theSession->SetUndoMarkName(markId2, "Point");

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression4);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression5);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression6);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression7);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression8);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression9);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression10);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression11);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression12);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression13);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression14);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression15);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression16);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression17);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression18);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    workPart->MeasureManager()->SetPartTransientModification();

    workPart->Expressions()->Delete(expression3);

    workPart->MeasureManager()->ClearPartTransientModification();

    theSession->DeleteUndoMark(markId2, NULL);

    NXOpen::Scalar *scalar7;
    scalar7 = workPart->Scalars()->CreateScalarExpression(expression22, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Scalar *scalar8;
    scalar8 = workPart->Scalars()->CreateScalarExpression(expression23, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Scalar *scalar9;
    scalar9 = workPart->Scalars()->CreateScalarExpression(expression24, NXOpen::Scalar::DimensionalityTypeNone, NXOpen::SmartObject::UpdateOptionWithinModeling);

    NXOpen::Point *point4;
    point4 = workPart->Points()->CreatePoint(scalar7, scalar8, scalar9, NXOpen::SmartObject::UpdateOptionWithinModeling);

    plane1->SetMethod(NXOpen::PlaneTypes::MethodTypePoint);

    std::vector<NXOpen::NXObject *> geom1(1);
    geom1[0] = point3;
    plane1->SetGeometry(geom1);

    plane1->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

    plane1->Evaluate();

    NXOpen::ScCollector *scCollector1;
    scCollector1 = workPart->ScCollectors()->CreateCollector();

    std::vector<NXOpen::SelectionIntentRule *> rules1(0);
    scCollector1->ReplaceRules(rules1, false);

    plane1->SetMethod(NXOpen::PlaneTypes::MethodTypePoint);

    std::vector<NXOpen::NXObject *> geom2(1);
    geom2[0] = point3;
    plane1->SetGeometry(geom2);

    plane1->SetAlternate(NXOpen::PlaneTypes::AlternateTypeOne);

    plane1->Evaluate();

    NXOpen::Point3d coordinates2(0.0, 0.0, 0.0);
    NXOpen::Point *point5;
    point5 = workPart->Points()->CreatePoint(coordinates2);

    workPart->Points()->DeletePoint(point1);

    NXOpen::Point3d coordinates3(0.0, 0.0, 0.0);
    NXOpen::Point *point6;
    point6 = workPart->Points()->CreatePoint(coordinates3);

    workPart->Points()->DeletePoint(point5);

    NXOpen::Point3d coordinates4(0.0, 0.0, 0.0);
    NXOpen::Point *point7;
    point7 = workPart->Points()->CreatePoint(coordinates4);

    workPart->Points()->DeletePoint(point6);

    NXOpen::Point3d coordinates5(0.0, 0.0, 0.0);
    NXOpen::Point *point8;
    point8 = workPart->Points()->CreatePoint(coordinates5);

    workPart->Points()->DeletePoint(point7);

    plane1->SetAlternate(NXOpen::PlaneTypes::AlternateTypeTwo);

    plane1->Evaluate();

    NXOpen::Point3d coordinates6(0.0, 0.0, 0.0);
    NXOpen::Point *point9;
    point9 = workPart->Points()->CreatePoint(coordinates6);

    workPart->Points()->DeletePoint(point8);

    NXOpen::Point3d coordinates7(0.0, 0.0, 0.0);
    NXOpen::Point *point10;
    point10 = workPart->Points()->CreatePoint(coordinates7);

    workPart->Points()->DeletePoint(point9);

    NXOpen::Session::UndoMarkId markId5;
    markId5 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Datum Plane");

    theSession->DeleteUndoMark(markId5, NULL);

    NXOpen::Session::UndoMarkId markId6;
    markId6 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, "Datum Plane");

    plane1->RemoveOffsetData();

    plane1->Evaluate();

    NXOpen::Point3d corner1_1(19.009691599918984, 0.0, 19.009691599918984);
    NXOpen::Point3d corner2_1(19.009691599918984, 0.0, -19.009691599918984);
    NXOpen::Point3d corner3_1(-19.009691599918984, 0.0, -19.009691599918984);
    NXOpen::Point3d corner4_1(-19.009691599918984, 0.0, 19.009691599918984);
    datumPlaneBuilder1->SetCornerPoints(corner1_1, corner2_1, corner3_1, corner4_1);

    datumPlaneBuilder1->SetResizeDuringUpdate(true);

    NXOpen::Features::Feature *feature1;
    feature1 = datumPlaneBuilder1->CommitFeature();

    NXOpen::Features::DatumPlaneFeature *datumPlaneFeature1(dynamic_cast<NXOpen::Features::DatumPlaneFeature *>(feature1));
    NXOpen::DatumPlane *datumPlane1;
    datumPlane1 = datumPlaneFeature1->DatumPlane();

    datumPlane1->SetReverseSection(false);

    theSession->DeleteUndoMark(markId6, NULL);

    theSession->SetUndoMarkName(markId1, "Datum Plane");

    datumPlaneBuilder1->Destroy();

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression2);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    scCollector1->Destroy();

    try
    {
        // Expression is still in use.
        workPart->Expressions()->Delete(expression1);
    }
    catch (const NXOpen::NXException &ex)
    {
      ex.AssertErrorCode(1050029);
    }

    workPart->Points()->DeletePoint(point4);

    // ----------------------------------------------
    //   Menu: Tools->Journal->Stop Recording
    // ----------------------------------------------
}
