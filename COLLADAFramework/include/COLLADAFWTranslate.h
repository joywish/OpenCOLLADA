/*
Copyright (c) 2008 NetAllied Systems GmbH

This file is part of COLLADAFramework.

Licensed under the MIT Open Source License, 
for details please see LICENSE file or the website
http://www.opensource.org/licenses/mit-license.php
*/

#ifndef __COLLADAFW_TRANSLATE_H__
#define __COLLADAFW_TRANSLATE_H__

#include "COLLADAFWPrerequisites.h"
#include "COLLADAFWTransformation.h"
#include "COLLADAFWMathVector3.h"

namespace COLLADAFW
{
	class Translate : public Transformation 
	{
	private:
		/** The vector that represents the translation.*/
		Math::Vector3 mTranslationVector;
	
	public:
		/** Default constructor. Constructs identity translation.*/ 
		Translate();

		/** Sets translation to @a vector.*/ 
		Translate(const Math::Vector3& translationVector);

		/** Sets the components of the translation to @a x, @a y, @a z.*/
		Translate(double x, double y, double z);

		virtual ~Translate();

		/** Returns the translation vector.*/
		const Math::Vector3& getTranslation() const { return mTranslationVector; }

		/** Sets the translation vector.*/
		void setTranslation(const Math::Vector3& translationVector) { mTranslationVector = translationVector; }

		/**  Sets the components of the translation to @a x, @a y, @a z.*/
		void setTranslation(double x, double y, double z) { mTranslationVector = Math::Vector3(x, y, z); }

	};
} // namespace COLLADAFW

#endif // __COLLADAFW_TRANSLATE_H__