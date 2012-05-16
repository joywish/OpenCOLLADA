/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_ABSTRACTBASECREATE_H__
#define __MayaDM_ABSTRACTBASECREATE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDependNode.h"
namespace MayaDM
{
class AbstractBaseCreate : public DependNode
{
public:

	AbstractBaseCreate():DependNode(){}
	AbstractBaseCreate(FILE* file,const std::string& name,const std::string& parent="",bool shared=false,bool create=true)
		:DependNode(file, name, parent, "abstractBaseCreate", shared, create){}
	virtual ~AbstractBaseCreate(){}

protected:
	AbstractBaseCreate(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool shared=false,bool create=true)
		:DependNode(file, name, parent, nodeType, shared, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_ABSTRACTBASECREATE_H__
