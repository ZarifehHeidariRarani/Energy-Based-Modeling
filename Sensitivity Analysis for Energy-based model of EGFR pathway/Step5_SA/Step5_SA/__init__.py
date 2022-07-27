"""AMICI-generated module for model Step5_SA"""

import amici

# Ensure we are binary-compatible, see #556
if '0.11.29' != amici.__version__:
    raise amici.AmiciVersionError(
        'Cannot use model `Step5_SA`, generated with amici=='
        f'0.11.29, together with amici=={amici.__version__} '
        'which is currently installed. To use this model, install '
        'amici==0.11.29 or re-import the model with the amici '
        'version currently installed.'
    )

from Step5_SA._Step5_SA import *

__version__ = '0.1.0'
