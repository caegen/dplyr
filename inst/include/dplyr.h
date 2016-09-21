#ifndef dplyr_dplyr_H
#define dplyr_dplyr_H

#include <Rcpp.h>
#include <dplyr/workarounds/static_assert.h>
#include <solaris/solaris.h>
#include <dplyr/config.h>
#include <dplyr/workarounds.h>

using namespace Rcpp;

#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/functional/hash.hpp>

#include <tools/tools.h>

#include <dplyr/ForwardDeclarations.h>
#include <dplyr/registration.h>
#include <dplyr/DataFrameAble.h>
#include <dplyr/CharacterVectorOrderer.h>
#include <dplyr/white_list.h>
#include <dplyr/check_supported_type.h>
#include <dplyr/visitor_set/visitor_set.h>
#include <dplyr/DataFrameVisitorsIndexSet.h>
#include <dplyr/DataFrameVisitorsIndexMap.h>
#include <dplyr/BoolResult.h>
#include <dplyr/EmptySubset.h>
#include <dplyr/FullDataFrame.h>
#include <dplyr/GroupedDataFrame.h>
#include <dplyr/RowwiseDataFrame.h>
#include <dplyr/tbl_cpp.h>
#include <dplyr/comparisons.h>
#include <dplyr/comparisons_different.h>
#include <dplyr/VectorVisitor.h>
#include <dplyr/SubsetVectorVisitor.h>
#include <dplyr/OrderVisitor.h>
#include <dplyr/VectorVisitorImpl.h>
#include <dplyr/SubsetVectorVisitorImpl.h>
#include <dplyr/DataFrameVisitors.h>
#include <dplyr/MultipleVectorVisitors.h>
#include <dplyr/DataFrameSubsetVisitors.h>
#include <dplyr/DataFrameColumnSubsetVisitor.h>
#include <dplyr/MatrixColumnSubsetVectorVisitor.h>
#include <dplyr/MatrixColumnVisitor.h>
#include <dplyr/DataFrameColumnVisitor.h>
#include <dplyr/subset_visitor.h>
#include <dplyr/visitor.h>
#include <dplyr/OrderVisitorImpl.h>
#include <dplyr/JoinVisitor.h>
#include <dplyr/JoinVisitorImpl.h>
#include <dplyr/DataFrameJoinVisitors.h>
#include <dplyr/Order.h>
#include <dplyr/SummarisedVariable.h>
#include <dplyr/Hybrid.h>
#include <dplyr/Result/all.h>
#include <dplyr/vector_class.h>
#include <dplyr/Gatherer.h>
#include <dplyr/Replicator.h>
#include <dplyr/Collecter.h>
#include <dplyr/NamedListAccumulator.h>
#include <dplyr/train.h>
#include <dplyr/Groups.h>


#endif
