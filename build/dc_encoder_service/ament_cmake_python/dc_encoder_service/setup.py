from setuptools import find_packages
from setuptools import setup

setup(
    name='dc_encoder_service',
    version='0.0.0',
    packages=find_packages(
        include=('dc_encoder_service', 'dc_encoder_service.*')),
)
